#include<stdlib.h>
#include<stdio.h>


int main(void)
{


int *punta, *puntb; int x=7; int y=5; punta=&x; 
*punta=3;
puntb=&y;
*puntb=x;
x=9;
printf("%d, %d\n",*puntb,x); // ¿qué imprime este printf? 








 } 

