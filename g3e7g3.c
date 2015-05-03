/*
 * func.c
 *
 *  Created on: 24/3/2015
 *      Author: Maxi
 */
#include <stdio.h>
#define x 3.18						/*x est· fijada para este caso*/

double exponential (double);		/*la funciÛn principal*/

double expo(double,int);
long fact(int);					/*bloques funcionales de la funciÛn principal*/
double divt (double, long);


int main (void)
{
	printf ("A continuaciÛn, se aproximar· la funciÛn\ne^%.2f utilizando los primeros 15 tÈrminos \ndel correspondiente polinomio de Taylor\n\n",x);
	double j= exponential(x);
	printf ("e^%.2f es aproximadamente %g\n",x,j);     /*cuando se llega al ˙ltimo tÈrmino*/
	return 0;
}


double exponential (double k)
{
	int n;								/*n es el contador de tÈrminos*/
	double f;							/*f es el valor del tÈrmino*/
	for (n=0;n<15;n++)				/*se aproximar· hasta el tÈrmino 15*/
	{
		double c= expo(k,n);			/*se eleva la base x al exponente n*/
		long d= fact(n);				/*se busca el factorial n*/
		double t= divt (c,d);			/*se dividen los resultados previos*/
		f=f+t;							/*se van sumando los tÈrminos sucesivos*/
	}
	return f;
}
double expo (double b, int e)
{
	double resul=1.0;
	for (;e>0;e=(e/2))
	{
		if (e!=(2*(e/2)))
			resul=(resul*b);
		b=(b*b);
	}
	return resul;
}
long fact (int m)
{
	long reslf=1;
	for (;m>0;m--)
		reslf=(reslf*m);
	return reslf;
}
double divt (double g, long h)
{
	double resld;
	resld=(g/h);
	return resld;
}

