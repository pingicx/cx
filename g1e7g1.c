#include <stdio.h>
#define mask1 0b00100001
#define mask2 0b00011000

int porta=0;

void main(void)
{
    if((porta&mask1)==mask1 || (porta&mask2)==0)            /*Aplico m·scara y verifico la condiciÛn de los bits. Luego aplico la otra m·scara y eval˙o, igualando a cero, la nueva condiciÛn*/
{
        printf("1\n");                                      /*Si alguna de las dos se cumple, se imprime un 1*/
}
    else                                                    /*Si no, se imprime un 0*/
{
        printf("0\n");
}
}

