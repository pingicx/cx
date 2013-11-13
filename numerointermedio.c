#include <stdio.h>

int main()
{
   int n1, n2, n3;

   printf( "Introduzca primer numero (entero): " );
   scanf( "%d", &n1 );
   printf( "Introduzca segundo numero (entero): " );
   scanf( "%d", &n2 );
   printf( "Introduzca tercer numero (entero): " );
   scanf( "%d", &n3 );

   if ( n2 < n3 && n2 > n1 )
      printf( "%d SI ES MENOR QUE %d Y MAYOR QUE %d\n", n2, n3, n1 );
   else
      printf( "%d NO ES MENOR QUE %d Y MAYOR QUE %d\n", n2, n3, n1 );

   return 0;
}
