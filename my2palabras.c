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

char *q;
q=(char *)malloc(128*sizeof(char));// reserva de memoria para el puntero

printf("Ingrese una primer palabra para contar sus caracteres\n");
scanf("%s",s);
printf("Ingrese una segunda  palabra para contar sus caracteres\n");
scanf("%s",q);


int l;
l=mystrlen(s);
printf ("el largo de la primer palabra es %d\n",l);

int l2;
l2=mystrlen(q);
printf ("el largo de la segunda palabra es %d\n",l2);


} 
