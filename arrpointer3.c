#include<stdio.h>

char arr1[10]={'a','b','c','d','e','f','g','h','i','j'};
//char arr2[]="cuatro";
//char arr2[5]={'z','x','v','n','m'};
char msj2[]="cuatro fiume";
char *p;
char *q;
//p=arr1;

int main(void)
{	
	p=arr1;		
	q=msj2;
int i,j;
for(i=0;i<10;i++)
printf("%c",*p+i);
printf("\n");
//for(j=0;j<5;j++)
//printf("%c",*q+j);

while(*(q))
printf("%c",*q++);
printf("\n");

return 0;

	
}

