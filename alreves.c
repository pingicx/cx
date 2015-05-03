/* fichero alreves.c */
/* Este programa lee una palabra y la escribe al revés */
#include <stdio.h>
int main (void)
{
    char c, palabra[21];
    int i;
    printf("Teclee una palabra de menos de 20 letras:\n");
    scanf("%s", palabra);
    i = 0;
    while(palabra[i++] != '\0')
      ;
    printf("%s tiene %d letras.\n", palabra, i);
    printf("%s escrita al revés es: \n", palabra);
    while (i >= 0)
       printf("%c", palabra[i--]);
    printf("\n");
}

