#include<stdio.h>

char mensaje[]={'p','r','o','g','r','a','m','a','c','i','o','n','1'};
//char mensaje[]="Programacion1";
char *p;
p=mensaje;

void main(void)
{
int i=0;
while(mensaje[i])
printf("%c",mensaje[i++]);
printf("\n");

i=0;
while(p[i])
printf("%c",p[i++]);
printf("\n");

p=mensaje;
i=0;

while(*(p))
printf("%c",*(p++));
printf("\n");

}

