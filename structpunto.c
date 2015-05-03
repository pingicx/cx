/*Lee tres puntos del plano y decide si están alineados*/

#include <stdio.h>

struct punto
{
float x;
float y;
};
typedef struct punto punto;

punto leer_punto(void);
void escribir_punto(punto);

int main()
{
punto p1, p2, p3;

p1=leer_punto();
p2=leer_punto();
p3=leer_punto();

if((p2.x-p1.x)/(p3.x-p2.x)==(p2.y-p1.y)/(p3.y-p2.y))
printf("Los puntos estan alineados.\n");
else printf("Los puntdos no estan alineados.\n");
return 0;
}

punto leer_punto()
{
punto p;
printf("Introduce las coordenadas del punto: \n");
scanf("%f%f",&p.x, &p.y);
return p;
}


