#include <stdio.h>
#include <string.h>

typedef struct {
int legajo;
char nombre[20];
char apellido[20];
float promedioAcademico;
}alumnoT;

alumnoT alumnos[10];

void main (void) {



alumnoT *pAlumnos;
pAlumnos = alumnos;


(*(pAlumnos+3)).legajo = 40224;
(*(pAlumnos+3)).promedioAcademico = 6.5;
strcpy((pAlumnos+3)->nombre,"Daniel");
strcpy((pAlumnos+3)->apellido,"Fernandez");


printf("Legajo de %s es: %d\n",(pAlumnos+3)->nombre,(pAlumnos+3)->legajo);


}


