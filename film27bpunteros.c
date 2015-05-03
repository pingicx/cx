#include<stdio.h>
//
//Inicializacion

char mensaje[]="Mensaje1";

char *p="Mensaje2";

int main(void)
{
 int i=0;
while (mensaje[i])
	printf("%c",mensaje[i++]);
printf("\n");	

//while(*p)
	printf("%s",*p);
printf("\n");

}
