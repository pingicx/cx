/* fichero recuento.c */
/* Este programa cuenta caracteres de un fichero */
#include <stdio.h>
int main(void)
{
    int n_blancos = 0, c, n_digitos = 0;
    int n_letras = 0, n_nulineas = 0, n_otros = 0;
    while ((c = getchar()) != '\n')
        if (c == ' ')
            ++n_blancos;
        else if (c>='0' && c<='9')
            ++n_digitos;
        else if ((c>='a' && c<='z') ||( c>='A' && c<='Z'))
            ++n_letras;
        else if ( c == '\n')
            ++n_nulineas;
        else
            ++n_otros;
      printf("%10s%10s%10s%10s%10s%10s\n\n", 
         "blancos", "digitos", "letras", "lineas", "otros", "total");
      printf("%10d%10d%10d%10d%10d%10d\n\n", 
          n_blancos, n_digitos, n_letras, n_nulineas, n_otros,
          n_blancos + n_digitos + n_letras + n_nulineas + n_otros);
}

