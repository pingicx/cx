//Simple array test.

int main()
{
	int arr[101];
       int *p;
       p=arr;

	for(int i=0;i<=100;i++)
		arr[i]=i;

	int sum=0;
	for(int i=0;i<=100;i++)
		sum+=arr[i];

	printf("sum=%d\n",sum);
       printf("prom=%d\n",sum/101);
      printf("pointer=%d\n",*(p+56)); 
	return 0;
}