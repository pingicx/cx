#include<stdio.h>

double num=2.8676213784531865;

void main (void)
{
	int entero=num;

	printf("A) Entero redondeado: ");	//Comparo el número con su entero sumado .5 para ver si redondeo para abajo
	if(num<entero+0.5)			// o para arriba.
		printf("%d\n",entero);
	else
		printf("%d\n",entero+1);

	printf("B) Entero superior: %d\n",entero+1);
	printf("C) Entero inferior: %d\n",entero);
	printf("D) Parte decimal: %f\n",num-entero); //Imprime solo los 6 primeros dígitos
	printf("E) Dos decimales: ");

	double var0=num*100;			//Multiplico el número por 100 y lo paso a entero para
	int var1=var0;				// solo conservar la parte entera y los primeros 2 decimales.
	double	var=var1;			//Hago una converción a tipo double para poder operar correctamente.

	if(num*100<var+0.5)			//Me fijo si el tercer decimal es menor a 5 para ver si
		printf("%.2f\n",var/100);	// redondeo para abajo o para arriba.
	else
		printf("%.2f\n",(var+1)/100);
}

