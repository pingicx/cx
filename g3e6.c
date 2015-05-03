#include<stdio.h>
#include<stdlib.h>

int main(void)
{
int m=4,n=3;
printf("Ingrese el numero de filas\n");
scanf("%d",&m);
printf("Ingrese el numero de columnas\n");
scanf("%d",&n);

int a=1,b=0,c=1,d=0 ;
 
while(a<=m)
	{while(c<=n)
		{printf("%d\t",c+d);
		c++;}
	printf("\n\n");
	++d;
	++a;
	c=1;
	}
}

