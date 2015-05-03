/*Funcion callback de comparacion para quicksort*/

#include<stdio.h>
#include<stdlib.h>

int CompaFunc(const void*componentes_a,const void*componentes_b)
{
return*(int*)componentes_a>*(int*)componentes_b;
}

int main(void)
{
int nelems;int i;
int array[]={743,712,832,924,810,872,882,723,814,701,946,883,876,774};
     nelems=sizeof(array)/sizeof(int);
printf("\n\n");
printf("Arreglo desordenado\n");
for(i=0;i<nelems;i++)
	printf("%d-",array[i]);
printf("\n\n");


/* ejecuto sortarray utilizando qsort()*/

qsort(array,nelems,sizeof(int),CompaFunc);

/* por ultimo muestro los resultados*/
printf("Arreglo ordenado\n");

for(i=0;i<nelems;i++)
	printf("%d-",array[i]);
printf("\n\n");

/* finalmente salgo*/
return 0;
}

