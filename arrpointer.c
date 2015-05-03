#include<stdio.h>

//char msj[]={'p','r','o','g','r','a','m','a','c','i','o','n','1'};
char msj[]={"Programacion1"};
//
char *p;

int main(void)
{

p=msj;

int i=0;
while(msj[i])
printf("%c",msj[i++]);
printf("\n");

i=0;
while(p[i])
printf("%c",p[i++]);
printf("\n");

p=msj;
i=0;

while(*(p))
printf("%c",*(p++));
printf("\n");

}


