#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef
struct{
char titulo [100];
char autor [100];
char ISBN[100];
char estante [100];
int prestado;
char cliente[100];
} ficha_libro;

typedef ficha_libro *PtrFichaLibro;
typedef PtrFichaLibro ArrPtrFichaLibro[10];
ArrPtrFichaLibro libros;

int main()
{
int i;
for (i=0;i<10;i++)
{
libros[i]=malloc(sizeof(ficha_libro));
if(libros[i] ==NULL)
{
printf ("No es posible reservar memoria \n");
return (-1);
}
}
for (i=0;i<10;i++){
printf("Introduce el titulo del libro %d: ",i);
scanf("%s", (libros[i])->titulo);
}

for (i=1;i<10;i++)
{
if (strcmp(libros[0]->titulo, libros[i]->titulo)==0)
printf ("El titulo del libro %d y 1 es igual. \n",i+1);
else
printf("El titulo del libro %d y 1 no es igual. \n",i+1);
}

for(i=0;i<10;i++)
{
free(libros[i]);
}
return 0;
}


