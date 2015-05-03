#include <stdio.h>

int main()
{
	char firstName[64],lastName[64];

	printf("Your First Name? ");
	scanf("%s",firstName);

	printf("Your Last Name? ");
	scanf("%s",lastName);

	printf("Hello, %s %s!!\n",firstName,lastName);

	return 0;
}