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
int p=0;
char s1[]="Argentinos";
char s2[]="arte";


p=many(s1,s2);

printf("%d\n",p);




}


