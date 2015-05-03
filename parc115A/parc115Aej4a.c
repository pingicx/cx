#include<stdio.h>

/* mystrcat:  concatenate t to end of s; s must be big enough; pointer version */
void mystrcat(char *s, char *t)
{
 /* run through the destination string until we point at the terminating '\0' */
  while('\0' != *s)
  {
    ++s;
  }

  /* now copy until we run out of string to copy */
  while('\0' != (*s = *t))
  {
    ++s;
    ++t;
  }

}


char arr1[20]=" Días";

char arr2[20]=" Buenos";

char *s;
char *t;

int main()
{
t=arr2;
s=arr1;

printf("concantenamos un string t= a otro s\n");
printf("mostramos que contienen los strings\n");
printf("primero el string t=");
int i=0;

while(arr1[i])
 printf("%c",arr1[i++]);
printf("\n\n");
i=0;
printf("luego  el string s=");
while(arr2[i])
 printf("%c",arr2[i++]);
printf("\n\n");


mystrcat(t,s);

printf("mostramos como queda el nuevo concatenado=");
i=0;
while(arr2[i])
 printf("%c",arr2[i++]);
printf("\n\n");

} 
