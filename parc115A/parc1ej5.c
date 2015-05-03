#include <stdio.h>
void sumar( int a,  int b,  int  respuesta);

int main (void)
{
  int answer=0;
  sumar( 5, 8,  answer);
  printf("%d \n",answer);
}

void sumar(int a,int b, int respuesta)
{
	 respuesta=a+b;
}

