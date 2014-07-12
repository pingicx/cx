#include<stdio.h>

int main(void)
{
char a='h';
 void *p;
p=&a;

printf("a: %c \n", *(char *)p);


/*printf("a: %c\n", a);*/

 return 0;
}

