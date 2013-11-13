#include <stdio.h>

int main()
{
   float altura, area, base;

   printf( "Introduzca base: " );
   scanf( "%f", &base );
   printf( "Introduzca altura: " );
   scanf( "%f", &altura );

   area = base * altura / 2;

   printf( "El area del triangulo es: %f\n", area );

   return 0;
}
