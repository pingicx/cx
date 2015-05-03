#include<stdlib.h>
#include<stdio.h>

double sino(double,int);

int main(void)

{
/*DECLARO VARIABLES*/

double sen;
double z;
int n;

/* solicito los datos*/

printf("\nCual es el angulo en radianes?\n"); scanf("%lf", &z);
printf("Con que numero de terminos aproximamos la serie?\n"); scanf("%d", &n);

sen=sino(z,n);

/*impresion de resultados*/

printf("\nsin(%.2lf)=%lf\n\n",z,sen);
return 0;
}

double sino(double z, int n)
{
int i;
double sen, termino;
for(sen=0,termino=z,i=1;i<=n;i++)
{
sen += termino;
termino= -termino*z*z/(2*i+1)/(2*i);
}

return sen;
}







