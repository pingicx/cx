/* 
 * File:   main.c
 * Author: jacoby
 *
 * Created on October 5, 2013, 12:13 PM
 * 
 * Reads Motorola S19 records from file 
 * and stores it in memory
 * 
 * File can be accessed via command line using redirection operator 
 * OR directly from file using file system functions
 * 
 * Memory is emulated by an array
 * 
 * Only S1 records are processed (S1 records have 16 bit address)
 * 
 * S1CCAAAADDDDDDDDDDDDDDDDDDDKK   CC bytes count , AAAA 16 bit address KK checksum
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0


/*========================*/
#define DEBUG TRUE
/*========================*/


#if DEBUG == TRUE

#define pdebug(x,y)     printf((x),(y))

#else

#define pdebug(x,y)

#endif


FILE * input_stream;

#define OUT_OFF_RANGE -1
#define K 1024

void parse_motorola_s19(void);
void rd_frame(void);

unsigned int read_4_hex(void);
unsigned char read_2_hex(void);
unsigned char hex2bin(char c);

int mygetchar(FILE *stream);


unsigned char memory[64 * K]; // Emulates system memory

/*
 * 
 */
int main(int argc, char** argv) {

    FILE *fstream;
    
    fstream=fopen("ram.s19","rb");
    
   input_stream = stdin;       // Access file via command line e.g.: prog < ram.s19 
  // input_stream = fstream;  // Access file via File system

    parse_motorola_s19();

    return (EXIT_SUCCESS);
}

void parse_motorola_s19(void) {
    char c;


    while ((c = mygetchar(input_stream)) != EOF) {

        pdebug("%c",c);

        if (c == 'S') /* An S record has begun */
        {
            c = mygetchar(input_stream);

            switch (c) 
            {
                
                case '0': /* S0 */
                    break;

                case '1': /* S1 */
                    rd_frame();
                    break;

                case '9': /* S9 */
                return;
            }
            
        } /* End of an S record */
    } /* End of file */




 


}

void rd_frame(void)
 {

    static unsigned int frame=0;
    unsigned int count;
    unsigned char data;
    unsigned char chk_sum = 0;
    unsigned char read_chk_sum = 0;
    unsigned int address = 0;


    chk_sum = 0;

    count = read_2_hex(); /* Number of bytes in the frame */

    pdebug("\ncount:%X\n", count);

    chk_sum += count;

    address = read_4_hex(); /* Determine load address */

    chk_sum += (((address >> 8)&0xFF) + (address & 0xFF)); // Update Checksum

    pdebug("\nAddress:%.4X\n", address);

    count -= 2; /* Update Nr of bytes remaining  */


    
    while (--count) /* Process Data */
    {

        data = read_2_hex(); /* read one data byte from file */

        pdebug("%.2X", data);

        memory[address++] = data; //Store data;

        chk_sum += data;  // Update Checksum


    }

    chk_sum = (~chk_sum & 0xFF); // Take lower 8 bits and 1st complement

    pdebug("\nchk_sum calculado:%.2X\n", chk_sum);

    read_chk_sum = read_2_hex(); /* Read frame checksum */

    pdebug("\nchk_sum recibido:%.2X\n", read_chk_sum);

    if(chk_sum!=read_chk_sum) /*if check sums are not equal exit program */
    {
        printf("Checksum error at frame %d",frame);
        exit(1);
    }
}

unsigned int read_4_hex(void) {
    unsigned int n;

    n = 256 * read_2_hex();
    n += read_2_hex();

    return (n);
}

unsigned char read_2_hex(void) {
    unsigned char n;

    n = 16 * hex2bin(mygetchar(input_stream)); /* hi nibble of byte */
    n += hex2bin(mygetchar(input_stream)); /* lo nibble of byte */

    return (n);
}



/* hex2bin converts HEX digits to Binary*/
unsigned char hex2bin(char c) {


    if ('0' <= c && c <= '9') // Check if c is in the 0-9 range
    {
        c = c - '0'; // Remove ASCII offset :)

        return (c);

    } else {

        c = c & 0xDF; /* lower case to upper case (just in case) */

        // Check if c is in the A to F range 

        if ('A' <= c && c <= 'F') {
            c = c - 'A' + 10;           /* Remove ASCII offset :) */          
            return (c);
        } else

            return (OUT_OFF_RANGE);
    }


}

int mygetchar(FILE *stream) {
    char c;

    c = fgetc(stream);

}