#include<stdio.h>
//char mensaje[]="Programacion1";
char mensaje[]={'p','r','o','g','r','a','m','a','c','i','o','n','1'};


char *p;
p=&mensaje[0];

void main(void)
{
int i=0;
while(*(p))
printf("%c",*(p++));
printf("\n");
}