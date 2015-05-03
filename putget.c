#include <stdlib.h> 
#include <stdio.h>
// 18/08/09 Catedra de Programacion I 11
int main(void)
{
int c;
printf("Ingrese un caracter (salir Ctrl+c)\n");
while ( (c = getchar()) != EOF) putchar(c);
return 0; 
}
