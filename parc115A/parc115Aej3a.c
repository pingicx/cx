#include<stdio.h>

/* strcpy:  copy t to s; array subscript version */
   void mystrcpy(char *s, char *t)
//   void mystrcpy(char s[], char t[])
   {
       int i;

       i = 0;
       while ((s[i] = t[i]) != '\0')
           i++;
   }

//char arr1[20]={'o','r','i','g','e','n'};
char arr1[20]="oringen";

//char arr2[20]={'n','a','d','a'};
char arr2[20]="nanda";

char *s;
char *t;

int main()
{
t=arr1;
s=arr2;

printf("copiamos un string t= a otro s\n");
printf("mostramos que contienen los strings\n");
printf("primero el string origen=");
int i=0;

while(arr1[i])
 printf("%c",arr1[i++]);
printf("\n\n");
i=0;
printf("luego  el string destino=");
while(arr2[i])
 printf("%c",arr2[i++]);
printf("\n\n");


mystrcpy(s,t);

printf("mostramos como queda el destino=");
i=0;
while(arr2[i])
 printf("%c",arr2[i++]);
printf("\n\n");

} 
