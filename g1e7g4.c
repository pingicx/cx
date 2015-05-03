#include <stdio.h>
#define MASCARA1 0x21								//Mascara que solo tiene los bits 5 y 0 en 1
#define MASCARA2 0x18								//Mascara que solo tiene los bits 4 y 5 en 0



int porta = 255;
main()
{
	if ((porta & MASCARA1 == 0x21) || (porta & MASCARA2 == 0x00))		//Al valor del puerto A se le aplica un AND para
	{									//comprobar las condiciones de forma tal que si los bits
	printf("1\n");								//5 y 0 tienen un 1 o los bits 4 y 3 tienen un 0
	}									//imprima un uno y, en caso contrario,
	else									//que imprima un cero.
	{
	printf("0\n");
	}
}

