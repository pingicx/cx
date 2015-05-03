#include<stdio.h>

#define mask1 0b00100001
#define mask2 0b00011000

//char portA=0b00011000;
char portA=255;
void main (void)
{
	if((portA&mask1)==mask1 || (portA&mask2)==0)		//Me fijo si hay unos en los bits 5 y 0 del puerto A,
		printf("1\n");					// o si hay ceros en los bits 3 y 4 del mismo puerto.
	else
		printf("0\n");
}


