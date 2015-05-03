#include<stdio.h>
//Inicializacion

char *mensaje[]={"Buenos","dias"};//arreglo de punteros a char

char **pmsg=mensaje;//Puntero a puntero a char

int main(void)
{

printf("\n%s",mensaje[0]);
printf("\n%s",mensaje[1]);

printf("\n%s",pmsg[0]);
printf("\n%s",pmsg[1]);

//printf("\n%c",*pmsg[0]);
//printf("\n%c",*pmsg[1]);

//printf("\n%X",pmsg[0]);
//printf("\n%X",pmsg[1]);


//printf("\n%s",pmsg[0]);
//printf("\n%s",pmsg[1]);



printf("\n");

}
