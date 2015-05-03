// Programación I - Primer Cuatrimestre de 2015
// Trabajo Práctico N°3: Bloques de Control

// Ejercicio N°6
// Grupo N°2 
// Integrantes: 
// Cufaro, Gabriel Agustín
// De Ruschi, Agustin
// Luo, Leandro Adrian
// Michel, Bernardo


#include <stdio.h>

int m;
int n;

void main (void)
{
	char c;
	printf("Numero de filas:");
	while ((c=getchar())!= '\n')        //ingreso del número de filas
		m = (m*10+(c-'0'));         //hago la conversión de char a número int

	printf("Numero de columnas:");      //idem que el anterior pero con el número de columnas
	while ((c=getchar())!= '\n')
		n = (n*10+(c-'0'));
        
	int fil, col, num=1;
	for (fil=0 ; fil<m ; fil++)         //hago el bucle que se repite tantas veces por filas
	{
		for (col=0 ; col<n ; col++) //hago el bucle que se repite tantas veces por columna, incrementando num por 1
		{
			printf("%d\t",num++);       //imprime en pantalla la matriz
		}
		printf("\n");
	}
}

