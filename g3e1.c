#include<stdio.h>
#include<stdlib.h>


void main(void)
{

char c;
for(c='1';c<='4';c++)
		switch(c)
		{
			case '1': case '2':
				printf("Caso a - %c\n",c);
				// break;
			case '3':
				printf("Caso b - %c\n",c);
				// break;
			default:
				printf("Caso c - %c\n",c);
		}
}
