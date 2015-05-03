/* El siguiente programa nos sirve como un ejemplo de estructuras anidadas,
las cuales podemos encontrar explicadas en la wiki de teoria */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct infopersona
{
char direccion[25];
char ciudad[20];
int codigo_postal;
};

typedef struct
{
char nombre_cliente[25];
struct infopersona direcc_cliente;
double saldo;
} cliente;
cliente clientes[50];

int main(void)
{
cliente MiCliente;
int numEmp = 0;
char opcion;

printf(" * ALTA DE EMPLEADOS * \n");
printf ("1.- Dar alta nuevo empleado \n");
printf ("0.- Salir \n");
printf("\n\n");
printf("Seleccione una opcion \n"); scanf("%c", &opcion);
printf("\n\n");

while (opcion != '0' || numEmp == 50)
{
printf("Nombre empleado:");scanf("%s",&MiCliente.nombre_cliente);
printf("Direccion(solo introducir el nombre de la calle,avenida...):");scanf("%s",&MiCliente.direcc_cliente.direccion);
printf("Cuidad:");scanf("%s",&MiCliente.direcc_cliente.ciudad);
printf("Codigo postal:");scanf("%d",&MiCliente.direcc_cliente.codigo_postal);
MiCliente.saldo = 0;
clientes[numEmp] = MiCliente;
numEmp++;

printf("Empleado Guardado Correctamente \n");
printf("\n");
printf(" * ALTA DE EMPLEADOS * \n");
printf ("1.- Dar alta nuevo empleado \n");
printf ("0.- Salir \n");
fflush(stdin);
fprintf(stdout, "Seleccione una opcion \n");
scanf("%c", &opcion);
}

printf (" *NUEVOS EMPLEADOS \n");
for (int i = 0; i< numEmp; i++)
{
printf("Nombre: %s\n", clientes[i].nombre_cliente);
printf("Direccion: %s\n", clientes[i].direcc_cliente.direccion);
printf("Cuidad: %s\n", clientes[i].direcc_cliente.ciudad);
printf("Codigo postal: %d\n",clientes[i].direcc_cliente.codigo_postal);
printf("Saldo: %d\n", clientes[i].saldo );
printf("\n\n");
}
return 0;
}


