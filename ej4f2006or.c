#include<stdio.h>

void sumar( int a,  int b,  int  respuesta);

void main (void)
{
  int answer;
  sumar( 2,  3,  answer);
  printf("%d \n",answer);
}

void sumar(int a,int b, int respuesta)
{
	respuesta=a+b;
}

