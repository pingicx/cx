#include<stdio.h>

#define MAX  5
int a=3;
int b=3;

void main (void)
{
  	while (a < MAX && b-->=0)
  	{ 
      	printf("%d%d",a,b);
      	a++;
       	}
     }

