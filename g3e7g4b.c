//ejercicio 7 de la guía 3, hecha por: 
//Tobias Scala
//legajo: 55391
//grupo 4

#include<stdio.h>
#define T 15

double tk, d, x, x1, n, f=1, t=2;
int main(void)
{
printf("Escriba un número de un dígito positivo o igual a 0 para el valor de x para la función e a la x, luego presione enter.\n");

x=(getchar()-'0');	//transformo el número ascii en número entero. 
x1=x;
tk=1+x;

if(getchar()!='\n')
{}
else
for(t;t<T;t++)		//el bloque dentro del for represneta
	{x=x*x1;	//la serie de taylor en T terminos 
	f=f*t;		//para aproximar el valor de la función
	d=x/f;		//e a la x.
	tk=tk+d;}
printf("el valor de e a la %.0f es igual a:\n%f\n",x1,tk);
return(0);
}

