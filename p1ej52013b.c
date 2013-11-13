#include<stdio.h>



int main (void)
{
	int a=-3,b=2;

	while (a==b || a==1 || b+a )
		printf("Loop:%d\n",a++);

	printf("Main:%d\n",a++);
   return(0);
}
