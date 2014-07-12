#include<stdio.h>
#include <string.h>


char *myStringTokenize(char *str, const char *delimiters)
{
static char*lastToken=NULL; /*unsafe shared state!*/
char *tmp;

/* Skip leading delimiters if new string*/

if(str==NULL){
str=lastToken;
if(str==NULL) /*End of history?*/
return NULL;
} else {
str+=strspn(str,delimiters);
}
/* Find end of segments*/
tmp=strpbrk(str,delimiters);
if (tmp){
/* Found another delimiter,split string and save state.*/
*tmp='\0';
lastToken=tmp+1;
}else{
/* Last segment remember that*/

lastToken=NULL;
}
return str;
}



int main()
{
 char str[]="-Esto,un ejemplo.";
 char *tok;
 printf("Separando \"%s\" en tokens:\n",str);
 tok= myStringTokenize(str,",.-");

while (tok != NULL)
{
	printf("%s\n",tok);
	tok=myStringTokenize(NULL,",.-");
}
return 0;
}


