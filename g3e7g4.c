/*

TRABAJO PRACTICO NUMERO DOS, EJERCICIO 7 REALIZADO POR:


TOBIAS SCALA		55391

BRUNO COSTANZO		55338

MATIAS SELSER		55155


GRUPO 4
PROGRAMACION I

PRIMER CUATRIMESTRE 2015

*/


#include <stdio.h>					//
							//
double exponential(double);				//
double getfloat(void);					//
double decimales(void);					//
							//
main()							//
{							//
printf("Ingrese el valor al cual quiere elevar e:\n");	//
exponential(getfloat());				//
}							//
							//
double exponential (double x)				//	
{							//
int n;							//	En esta funcion, se resuelve el taylor de e elevado a la x
double terminon = 0.0;					//	de forma recursiva. Cada termino de la serie es igual a si
int numfact = 1;					//	mismo con un termino que es siempre igual pero multiplicado
double terminoant = 1.0;				//	por el valor y sobre el siguente, haciendo asi las potencias
for(n = 1; n < 15; n++)					//	y el factorial.
	{						//
	terminon = terminon + terminoant ;		//
	terminoant = terminoant * x / numfact;		//
	numfact += 1;					//
							//
	}						//
	printf("El resultado es: %f\n",terminon);	//
}							//
							//
double getfloat(void)					//	En la funcion getfloat, como su nombre lo indica, uno puede
{							//	ingresar un numero casi sin restricciones (es decir, funciona
unsigned int contador;					//	como el scanf) y no tiene que especificar ni la cantidad de decimales
int parteent = 0;					//	ni la parte entera separada de la decimal. Por ejemplo: 6,18 o 1,21.
float partedec = 0.0;					//
float numfloat;						//
unsigned char c;					//
float n = 10.0;						//
int signo = 1;						//
							//
for(contador = 5; contador >=0; contador--)		//	En esta parte de la funcion se obtienen los numeros enteros
	{c = getchar();					//	utilizando un contador que "limita" la cantidad de digitos,
							//	pero en este sentido es un limite muy alto ya que no suelen
	if(c == '\n')					//	utilizarse numeros muy grandes.
	break;						//
	if(c == '-')					//
	{signo = -signo;				//
	continue;}					//
	if (c == ',')					//
	{						//
	partedec = decimales();				//
	break;						//
	}						//
	parteent = parteent * 10 + (c - '0');		//
	}						//
							//
numfloat = partedec + parteent;				//
	if(signo == 1)					//
	return numfloat;				//
	else						//
	printf("%f",-numfloat);				//
	return -numfloat;				//
							//
							//
}							//
							//
double decimales(void)					//
{							//	Lo mismo ocurre aqui en los decimales, funcion que actua
int contadordec;					//	de forma muy similar a la funcion que obtiene los enteros.
float partedec;						//
float potencia10 = 10.0;				//
int decimal;						//
							//
for(contadordec = 5; contadordec >=0; contadordec--)	//
	{						//
	decimal = getchar();				//
	if(decimal == '\n')				//
		{break;}				//
	decimal = decimal - '0';			//
	partedec += decimal / potencia10;		//
	potencia10 *= 10;				//
	}						//
							//
return partedec;					//
							//
}							//

