#include<stdio.h>

//
int main(void)
{
int s,*a;
//int r=653;
a=&s;
*a=3;
(*a)++;
printf("%d\n", *a);
*a++;
printf("%d\n", *a);
}

