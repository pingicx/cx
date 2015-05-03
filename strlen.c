#include<stdio.h>


int mystrlen(char *s)
{int n;
for(n=0;*s!='\0'; s++)
 n++;
return n;
}

main ()
{
char *s={"Hola Mundo"};
int l;
l=mystrlen(s);
printf ("el largo del string es %d\n",l);
} 
