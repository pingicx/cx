#include <stdio.h>
#define n 3			/*constantes definidas*/
#define m 5
int num=1;			/*variable de numeros*/
void main ()
{		
	int col,fil;
	for (fil=0;fil<m;fil++)		/*fil es el contador de filas*/
	{
		for (col=0; col<n; num++, col++)	
			printf("%d\t",num);		/*se imprimen numeros hasta la cantidad de columnas 								necesarias*/
		printf ("\n");				/*al final se pasa a la siguiente fila y se repite el 								proceso hasta cumplir con la cantidad de filas*/
	}

}

