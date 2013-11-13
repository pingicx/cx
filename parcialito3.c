#include<stdio.h>
#define ARR_SIZE 3

int array1[ARR_SIZE]={1,2,3};
int *pint;
int i, result1, result2, result3, result4;
int main(void)
{

	pint= array1;
	printf("%p\n",array1);
	for(i=0; i<ARR_SIZE; i++)
 	{
		result1 = array1[i];
		result2 = *(array1 +i);
		result3 = pint [i];
		result4 = *(pint+i);
		printf("array1[%d] = %d ",i,result1);
		printf("array1[%d] = %d ",i,result2);
		printf("array1[%d] = %d ",i,result3);
		printf("array1[%d] = %d\n",i,result4);
	}
	return 0;
}
