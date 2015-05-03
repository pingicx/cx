/* fichero frase.c */
#include <stdio.h>
int main(void)
{
    char c, frase[140];
    int i, n;
    printf("Introduzca una frase de menos de 140 caracteres.\n");
    //printf("Para finalizar pulse ^Z:\n");
    i = 0;
    while((c=getchar())!='\n') {
        frase[i] = c;
        i++;
    }
    frase[i] = '\0';
    printf("\n");
    for (n=i; n>=0; n--)
        putchar(frase[n]);
    printf("\n");
}

