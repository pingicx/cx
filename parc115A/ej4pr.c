#include<stdio.h>
//#include<string.h>
void mystrcat(char a*, char *b);

int main(void)
{
char *arr1[]={"Buenos"};
char *arr2[]={"Dias"};

mystrcat(*arr1,*arr2);
printf("%s",*arr1);
}

void mystrcat (char *a, char *b)
{
int i,j;
for (i=0;a[i]!='\0';i++);
for(i,j=0;b[j]!='\0';i++,j++)
 a[i]=b[j];
a[i]=b[j];
}
