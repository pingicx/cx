
#include<stdio.h>
#include <string.h>

int main()
{
 char str[]="-Esto,un ejemplo.";
 char *tok;
 printf("Separando \"%s\" en tokens:\n",str);
 tok= strtok(str,",.-");

while (tok != NULL)
{
	printf("%s\n",tok);
	tok=strtok(NULL,",.-");
}
return 0;
}

