#include<stdlib.h>
#include<stdio.h>


int main(void)
{


int *punt;
int x=7;
int y=5;
punt=&x;
*punt=3;
punt=&y;
*punt=x;
x=9;
printf("%d, %d\n",*punt,x); // ¿qué imprime este printf? 








 } 

