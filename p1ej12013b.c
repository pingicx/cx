#include <stdio.h>
#include <stdlib.h>

#define L(X)    printf("%s",X);
#define SALTO   printf("\n");

char *a[]={"SIMULACRO?", "SABADO SOLEADO", "SUERTUDO!", "SUFRIENDO!"};
char **p[]={a+2,a+1,a+2,a+3};
char ***q=p;

int main (void)
{
    L(**++q); SALTO;
    L(*--*++q+5); SALTO;
    L(*q[-1]+3); SALTO;
    L(*++q[-1]+5); SALTO;
    return 0;
}
