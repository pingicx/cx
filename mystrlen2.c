#include<stdio.h>
#include<stdlib.h>


int mystrlen(char *s)
{  
char *p=s;
while(*p !='\0')
{ p++;}
return p-s;
}

int main ()
{
char *s;
s=(char *)malloc(128*sizeof(char));// reserva de memoria para el puntero
printf("Ingrese un string para contar sus caracteres\n");
scanf("%s",s);
int l;
l=mystrlen(s);
printf ("el largo del string es %d\n",l);
} 
