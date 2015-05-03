#include <stdio.h>









double getfloat (void)
{
	double num,i;
	int c;
	int nega;
	if ((c=getchar()) == '-')
		nega=1;
	else
		num=(c-'0');
	for(;(c=getchar()) != '\n';)
	{
		if ((c=='.') || (c==','))
			break;
		num=(num*10)+(c-'0');
	}
	if ((c=='.') || (c==','))
		for (i=10; ((c=getchar()) != '\n');i=(i*10))
		{
			num= (num+((c-'0')/i));
		}
	if( nega == 1 )
	num=(num)*-1;
	
	return num;

}

int main (void)
{
	double a=getfloat();
	printf("%f\n",a);
}
