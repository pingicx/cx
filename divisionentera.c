#include <stdio.h>

int main()
{
   int dividendo, divisor, cociente, resto;

   printf( "Introduzca dividendo (entero): " );
   scanf( "%d", &dividendo );
   printf( "Introduzca divisor (entero): " );
   scanf( "%d", &divisor );

   cociente = dividendo / divisor;
   resto = dividendo % divisor;

   printf( "%d div %d = %d ( Resto = %d )\n",
           dividendo, divisor, cociente, resto );

   return 0;
}
