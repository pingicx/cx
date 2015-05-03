#include <stdio.h>
 
#define N_FILAS 25
#define N_COLUMNAS 4
#define LIBRE 0
#define OCUPADO 1
 
/* Función que muestra el menú del programa y retorna
el número de menú elegido por el usuario */
int mostrarMenu();
 
void reservarAsiento(int a[][N_COLUMNAS]); 
void cancelarAsiento(int a[][N_COLUMNAS]);
void mostrarOcupacion(int a[][N_COLUMNAS]);
 
int main(){
/* Los asientos inicialmente están libres*/
int asiento[N_FILAS][N_COLUMNAS]={0};
int resp=mostrarMenu();

while(resp!=4){
switch(resp){
case 1:
reservarAsiento(asiento);
break;
case 2:
cancelarAsiento(asiento);
break;
case 3:
mostrarOcupacion(asiento);
break;
}
resp=mostrarMenu();
} 
getchar();
}
 
int mostrarMenu(){
int resp;
printf("\n\n");
printf("1) Reservar Asiento\n");
printf("2) Cancelar Asiento\n");
printf("3) Mostrar Ocupacion\n");
printf("4) Salir\n");
scanf("%d",&resp);
return resp;
}
 
void reservarAsiento(int a[][N_COLUMNAS]){
int fila, col;
 
printf("Escriba la fila del asiento a reservar: ");scanf("%d",&fila);
printf("Escriba la columna del asiento a reservar: ");scanf("%d",&col);

if(a[fila][col]==OCUPADO) printf("Ese asiento ya está reservado\n");
else {
a[fila][col]=OCUPADO;
printf("Reserva realizada\n");
}
}
 
void cancelarAsiento(int a[][N_COLUMNAS]){
int fila, col;
 
printf("Escriba la fila del asiento a cancelar: ");scanf("%d",&fila);
printf("Escriba la columna del asiento a cancelar: ");scanf("%d",&col);

if(a[fila][col]==LIBRE) printf("Ese asiento no está ocupado\n");
else {
a[fila][col]=LIBRE;
printf("Cancelación realizada\n");
}
}
 
void mostrarOcupacion(int a[][N_COLUMNAS]){
int i,j;

for(i=0;i<N_FILAS;i++){
for(j=0;j<N_COLUMNAS;j++){
printf("fila %d, columna %d ",i,j);
if(a[i][j]==LIBRE) printf("Libre\n");
else printf("Ocupado\n");
}
}
}


