#include <stdio.h>


int main(void)
{
    int m,n,j,c=0,d=0,i=1;
    printf("Numero de filas:\n");
    while ((m=getchar())!='\n')
        c=c*10+(m-48);

    printf("Numero de columnas:\n");


    while((n=getchar()) != '\n')
        d=d*10+(n-48);

    j=d;

    for(c;c>0;c--)

    {
        for (d;d>0;d--)
        {
            printf("%d\t",i++);

        }
        d=j;
        printf("\n");
    }
}




