/* determinante de 3x3 */
#include <stdio.h>
int main(void)
{
double matriz[3][3];
int i,j; /* subindices para recorrer la matriz */
double determinante;
printf("Calculo del determinante de una matriz cuadrada\n");
for(i=1;i<4;i++)
{
for(j=1;j<4;j++)
{ printf("Introduce matriz[%d][%d]\n",i,j);
scanf("%lf",&matriz[(i-1)][(j-1)]);
}
}
determinante=(matriz[0][0]*matriz[1][1]*matriz[2][2]+matriz[1][0]*matriz[2][1]*matriz[0][2]+matriz[2][0]*matriz[0][1]*matriz[1][2])-(matriz[0][2]*matriz[1][1]*matriz[2][0]+matriz[1][2]*matriz[2][1]*matriz[0][0]+matriz[2][2]*matriz[0][1]*matriz[1][0]);

printf("\n");
printf("Matriz cargada\n");
printf("%lf\t%lf\t%lf\n",matriz[0][0],matriz[0][1],matriz[0][2]);
printf("%lf\t%lf\t%lf\n",matriz[1][0],matriz[1][1],matriz[1][2]);
printf("%lf\t%lf\t%lf\n\n",matriz[2][0],matriz[2][1],matriz[2][2]);
printf("El determinante es %lf\n\n",determinante);
return 0;
}

