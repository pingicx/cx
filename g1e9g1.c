#include <stdio.h>

    void main (void)

{
    double var1=4.169785;
    printf ("Numero Original:\t\t%f\n",var1); /* Muestro en pantalla el n˙mero original*/
    printf ("Entero redondeado:\t\t%.f\n",var1);/*Acorto los decimales a 0, mostrando el entero redondeado*/
    if ((var1 - (int)var1)>0.5) /*Mediante una resta del n˙mero con su parte entera obtengo sus decimales*/
        {
        printf ("Entero superior:\t\t%.f\n",var1);/* Al ser sus decimales mayores a 0.5, el redondeo com˙n mostrar· el entero superior*/
        printf ("Entero inferior:\t\t%.f\n",var1-1);/*Por el mismo motivo, restando 1 y luego redondeando obtengo el entero inferior*/
        }
    else
        {
        printf ("Entero superior:\t\t%.f\n",var1+1);/* En este caso, debo sumarle uno para obtener el redondeo superior...*/
        printf ("Entero inferior:\t\t%.f\n",var1);  /*...ya que el redondeo com˙n al quitar decimales me devuelve el entero inferior*/
        }
    printf ("Parte Decimal:  \t\t%f\n",(var1-(int)var1)); /*La parte decimal se obtiene restando el n˙mero en cuestiÛn con su parte entera*/
    printf ("Redondeado a 2 decimales:\t%.2f\n",(var1)); /* Se limitan los decimales(a 2) mediante argumento del llamado de la variable, ya que el mismo realiza el redondeo*/
}

