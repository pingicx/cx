#include<stdio.h>
#include<stdlib.h>

int main(void)

{
/*DECLARO VARIABLES*/

double termino, sen;
float z;
int i,n;

/* solicito los datos*/

printf("\nCual es el angulo en radianes?\n"); scanf("%f", &z);
printf("Con que numero de terminos aproximamos la serie?\n"); scanf("%d", &n);

for(sen=0,termino=z,i=1;i<=n;i++)
{
sen += termino;
termino= -termino*z*z/(2*i+1)/(2*i);
}

/*impresion de resultados*/

printf("\nsin(%.2f)=%f\n\n",z,sen);
return 0;
}