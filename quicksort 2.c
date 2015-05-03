/*Funcion callback de comparacion para quicksort*/

#include<stdio.h>
#include<stdlib.h>

int CompaFunc(const void*elem_a,const void*elem_b)
{
return *(int*)elem_a>*(int*)elem_b;
}

int main(void)
{
int nelems;
int array[]={34,12,32,9,10,72,82,23,14,7,94};
     nelems=sizeof(array)/sizeof(int);

/* ejecuto sortarray utilizando qsort()*/

qsort(array,nelems,sizeof(int),CompaFunc);

/* por ultimo muestro los resultados*/

int i;
for(i=0;i<nelems;i++)
	printf("%d-",array[i]);
printf("\n");

/* finalmente salgo*/
return 0;
}

