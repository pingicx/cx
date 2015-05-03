//Simple pointer test.

int main()
{
	int a,*b;

	a=1;
	printf("a=%d\n",a);

	b=&a;
	*b=2;
	printf("a=%d\n",a);
       printf("*b=%d\n",*b);

	return 0;
}