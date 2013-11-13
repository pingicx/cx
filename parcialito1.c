#include<stdio.h>

int main()

{
int i;
int j;
for (i=1; i<=10; i++)
{ for (j=1;j<=10-i+1; j++)
	{printf("%d",j);}

	printf("\n");
}
printf("\n\n");
return 0;
}

