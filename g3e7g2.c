// Programación I - Primer Cuatrimestre de 2015
// Trabajo Práctico N°3: Bloques de Control

// Ejercicio N°7
// Grupo N°2 
// Integrantes: 
// Cufaro, Gabriel Agustín
// De Ruschi, Agustin
// Luo, Leandro Adrian
// Michel, Bernardo


#include <stdio.h>

double factorial (double j) 	//se obtiene el factorial de valor otorgado a j, utilizo j como double ya que el máximo valor del factorial a utilizar tiene 13 cifras.
{
	int i;
	int k=j;
	for(i=1;i<k;i++)
		j=j*(k-i);	//hago la operación del factorial
//	printf("%f\n",j);	//puesta por si quiero ver el valor que entrega la subrutina
	return j;
}

double exponencial (double a, int e)   //se eleva a la potencia definida por 'e'(exponente) el número 'a' (base).
{
	int l;			//contador del for para multiplicar e veces al número a.
	double temp;		//variable temporal que contiene el valor de 'a' para poder 					// multiplicarse por si mismo reiteradas veces.
	temp=a;
	for(l=1;l<e;l++)	//hago la operación 'e' veces.
	a=a*temp;
//	printf("%f\n",a);	//puesta por si quiero ver el valor que entrega la subrutina
	return a;
}

double exponential(double x)	//hace el desarrollo de taylor de 'e' elevado a la 'x' con 15 términos.
{
	int b;
	double c=1;			//inicializo c con el primer término de la serie que es 1
	for(b=1;b<15;b++)		//sumo los 15 términos de la serie de taylor
		c += ((exponencial(x,b))/(factorial(b)));

	return c;
}

double main (void)
{
	char c;
	double ent=0;	//parte entera
	double dec=0;	//parte decimal
	int cont=0;	//contador de cifras decimales
	double x;

	printf("Introduzca la parte entera:");
	while ((c=getchar())!= '\n')
		ent = (ent*10+(c-'0'));		//hago la conversión de char la parte del double

	printf("Introduzca la parte decimal:");
	while ((c=getchar())!= '\n')
	{
		dec = (dec*10+(c-'0'));		//hago la conversión de char a la parte del double
		cont++;
	}

	x = ent+dec/exponencial(10,cont);	//sumo la parte entera con la parte decimal para obtener 'x'.

	printf("Usando una serie de Taylor de orden 15, el valor de e^%f es %f\n", x, exponential(x)); 
}

