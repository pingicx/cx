#include<stdlib.h>
#include<stdio.h>

void suma_dos(int *x, int *y, int *z)
    {    
*x=*x+2;    
*y=*y+2; 
*z=*z+2; } 

int main(void)
{
int x,y,z;

printf("Introduzca tres numeros:\n");

scanf("%d\n%d\n%d\n",&x,&y,&z);

suma_dos (&x, &y, &z);

printf("%d\n%d\n%d\n",x,y,z);        // qué imprimirá??
 } 

