//Calling function by pointer to user defined function.

void test(int a,int b)
{

a=a*3;
b=++b;
	printf("%d,%d\n",a,b);
}

int main()
{
	void(*p) (int,int);

	p=&test;
	p(1,9);
       test(1,9);

	test(3,4);
       p(1,1);

	return 0;
}