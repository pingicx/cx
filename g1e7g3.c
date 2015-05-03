#include <stdio.h>
int porta=0; /* creamos una variable para probar el pragrama */
#define m1 0x21 /* mascara para mostrar solo los bits 5 y 0 */
#define m2 0x18 /* mascara para mostrar solo los bits 4 y 3 */
void main(void)
{
	if ((porta & m1) == m1) /* & para berificar si las posiciones contienen un 1 al mismo tiempo (5 y 0) */
		printf ("1\n");
	else if ((porta & m2)==0) /* De no serlo se procede a la siguiente mascara que verifica si se hayan ambos en 0 (4 y 3) */
		printf ("1\n");
	else printf ("0\n"); /* De no ser ninguno: 0 */
}


