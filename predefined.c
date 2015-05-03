#include <stdio.h>

int main()
{
	printf("Documents directory : %s\n",__DOC_DIR__);
	printf("Source file being executed : %s\n",__FILE__);
	printf("Source file directory being executed : %s\n",__DIR__);

	return 0;
}