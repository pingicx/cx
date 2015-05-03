#include<stdio.h>
#include<stdlib.h>

int mystrlen(char *s)
{  //int n;


//for(n=0;*s!='\0'; s++)
char *p=s;

while(*p !='\0'   )
{ p++;}
return p-s;
}

int main ()
{
char *s={"Argentino"};
int l;
l=mystrlen(s);
printf ("el largo del string es %d\n",l);
} 
