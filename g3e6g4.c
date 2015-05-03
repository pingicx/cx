/*

TRABAJO PRACTICO NUMERO DOS, EJERCICIO 6 REALIZADO POR:


TOBIAS SCALA		55391

BRUNO COSTANZO		55338

MATIAS SELSER		55155

GRUPO 4
PROGRAMACION I
PRIMER CUATRIMESTRE 2015

*/



#include <stdio.h>

int matriz[10][10] = {};
unsigned int filas, columnas, crecimiento;
unsigned int contadorfil = 0, contadorcol = 0;
char signoonum;
int numero;
int twogetchar(void);


main()
{


printf("Ingrese el numero de filas:");
filas =(twogetchar() - '0');

printf("Ingrese el numero de columnas:");
columnas = (twogetchar() - '0');

printf("Ingrese el numero mas bajo:");
signoonum = getchar();

if (signoonum == '-') 
	numero = -(twogetchar() - '0');
else
	{numero = (signoonum - '0');
	getchar();}



printf("Ingrese el crecimiento unitario:");
crecimiento = (twogetchar() - '0');



for(contadorfil = 0;filas > contadorfil; contadorfil++)
	for(contadorcol = 0; columnas > contadorcol; contadorcol++)
	{
	matriz[contadorfil][contadorcol] = numero;
	numero += crecimiento;
	}

for(contadorfil = 0;filas > contadorfil; contadorfil++)
	{
	
	for(contadorcol = 0; columnas > contadorcol; contadorcol++)
		printf("%d\t",matriz[contadorfil][contadorcol]);
	printf("\n");
	}


}


int twogetchar(void)
{
	int chardev = getchar();
	getchar();
	return chardev;
}





