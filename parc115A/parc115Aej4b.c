#include <stdio.h>
#include<stdlib.h>

int many(char s1[], char s2[])
{
  int i;
  int j;
  int pos;

  pos = -1;

  for(i = 0; pos == -1 && s1[i] != '\0'; i++)
  {
    for(j = 0; pos == -1 && s2[j] != '\0'; j++)
    {
      if(s2[j] == s1[i])
      {
        pos = i;
      }
    }
  }

  return pos;
}

int main()
{
printf("La función many retorna la primera posicion dentro del string\n"); 
printf("a en donde se encuentre cualquier caracter del string b.\n"); 
printf("La función devuelve un -1 si a no contiene caracteres presentes en b.\n");
char s1[100],s2[100];

int p=0;
//char s1[]="Argentinos";
//char s2[]="arte";
printf("Ingrese el Primer String\n");
scanf("%s",s1);

printf("Ingrese el Segundo String\n");
scanf("%s",s2);

printf("Primer String: %s\n",s1);
printf("Segundo String: %s\n",s2);
printf("Ahora ejecutamos la funcion many:  ");



p=many(s1,s2);

printf("%d\n",p);




}



