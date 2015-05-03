#include <stdio.h>
#define N_FILAS 4
#define N_COLUMNAS 25
#define LIBRE 0
#define OCUPADO 1

#define OK 1

#define NOK 0

/* Función que muestra el menú del programa y retorna
el número de menú elegido por el usuario */
int mostrarMenu();

void reservarAsiento(int a[][N_COLUMNAS]); 
void cancelarAsiento(int a[][N_COLUMNAS]);
void mostrarOcupacion(int a[][N_COLUMNAS]);
void mostrarOcupacion2(int a[][N_COLUMNAS]);

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
mostrarOcupacion2(asiento);
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
int data_entry=NOK;


do {

printf("Escriba la fila del asiento a reservar: ");scanf("%d",&fila);
printf("Escriba la columna del asiento a reservar: ");scanf("%d",&col);

if (fila<1 || fila > N_FILAS || col<1 || col > N_COLUMNAS)

		printf("Coordernadas incorrectas \n");
	else
		data_entry=OK;

}
while (data_entry==NOK) ;



if(a[fila-1][col-1]==OCUPADO) printf("Ese asiento ya está reservado\n");
else {
a[fila-1][col-1]=OCUPADO;
printf("Reserva realizada\n");
}
}

void cancelarAsiento(int a[][N_COLUMNAS])
{
int fila, col;
int data_entry=NOK;

do {

	printf("Escriba la fila del asiento a cancelar: ");scanf("%d",&fila);
	printf("Escriba la columna del asiento a cancelar: ");scanf("%d",&col);

	if (fila<1 || fila > N_FILAS || col<1 || col > N_COLUMNAS)

		printf("Coordernadas incorrectas \n");
	else
		data_entry=OK;

}
while (data_entry==NOK) ;


if(a[fila-1][col-1]==LIBRE) 
	printf("Ese asiento no está ocupado\n");

else 	{
		a[fila-1][col-1]=LIBRE;
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


void mostrarOcupacion2(int a[][N_COLUMNAS]){
int row,col;

//printf("\t");
for(col=0;col<N_COLUMNAS;col++)
printf("%02d ",col+1);

printf("\n ");
	for(row=0;row<N_FILAS;row++)
	{
		{
			for(col=0;col<N_COLUMNAS;col++)
			printf("%c  ",(a[row][col]==LIBRE)?'.':'O');

		}
		printf("\n ");

	}

}



