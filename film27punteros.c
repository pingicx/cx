#include<stdio.h>
//
//Inicializacion

char mensaje[]="Mensaje1";

char *p="Men\\0saje2";

int main(void)
{
 int i=0;
while (mensaje[i])
	printf("%c",mensaje[i++]);
printf("\n");	

while(*p)
	printf("%c",*p++);
printf("\n");

}
