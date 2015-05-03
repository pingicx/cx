#include<stdio.h>
#include<stdlib.h>

int isPrime(int);

int main ( void )
{
int n,k;
printf ("Entre un numero\n");
scanf("%d",&n);
k=isPrime(n);
if(k==2)
	printf("Es primo\n");
else
	printf("No es primo\n");
return 0;
}
int isPrime(int n)
{ int i=1,c=0;
	while(i<=n)
	{ if(n%i==0)
		c++;
		i++;
	}
return c;
}


