//================ Importante ========================
//  gcc -o pfex  pfex.c -lm
//
//====================================================




#include <stdio.h>
#include <math.h>
//El siguiente programa imprinme el modulo de un nro complejo
//En el caso de que el nro tenga la parte imag =0 la rutina de
//impresion del resultado es distinta que si no lo es.
//Para seleccionar a que rutina llamar se testea
//la parte imaginaria del numero y luego se selecciona
//a que rutina se llama. este llamado se hace mediante
//un puntero a funcion


void (*pf)(float,float); //Pointer to function (declaracion)

void print_modulo(float,float);
void print_real(float,float);
void print_complejo(float,float);


void main(int argc,char *argv[])

{

print_modulo(1,1);
print_modulo(2,0);
print_modulo(3,4);
print_modulo(-1,0);

}


void print_modulo(float a ,float b)
{
   (b==0) ? (pf=print_real) : (pf=print_complejo);

   (*pf)(a,b);       //Call to funtion via pf

}



void print_real(float a,float b)     // abs(a)

{
  printf("El Modulo de %f es:%f \n",a,fabs(a));
}
void print_complejo(float a,float b)
{
  printf("El Modulo de %f+j%f es:%f \n",a,b,sqrt( pow(a,2.0)+pow(b,2.0)));
}

