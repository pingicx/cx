#include <stdio.h>

void main (void)
{
	double a=3.1415926535897932;	/*inicializamos un numero para probar*/
	printf ("Entero redondeado: %.0f\n Entero superior: %d\n Entero inferior: %d\n Parte decimal: %.20f\n Redondeado a 2 decimales: %.2f\n",a,(int)(a+1),(int)a,a-(int)a,a);
}
/* En una sola funcion se incluyen los cuatro numeros pedidos*/


