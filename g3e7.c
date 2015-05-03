#include<stdlib.h>
#include<stdio.h>
double exp(double );

int main ( void )
{

double z;
double ex;

printf ("Entre un numero\n");
scanf("%lf",&z);

ex=exp(z);

printf("e^(%f)=%f\n\n",z,ex);

return 0;
}

double exp(double z)
{
double term;
double ex;
int i,n=15;
for(ex=1,term=z,i=2;i<=n;i++)
{ ex += term;
  term= term*z/i;
}
return ex;
}
