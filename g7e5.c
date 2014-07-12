/*strcmp:regresa <0 si s<t,0 si s==t,>0 si s>t*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strcmp(const char *s, const char *t)
{
for(; *s==*t;s++,t++)
	if(*s=='\0')
		return 0;
	return *s-*t;
}


main()
{
char s[15]="aca", t[15]="alfajor";
int n;

n = strcmp(s,t);

if(n==0){
printf("Las dos cadenas \"%s\" y \"%s\" son iguales.\n", s, t);
}
else{
if(n>0){
printf("La cadena \"%s\" es mayor que \"%s\".\n",s,t);
}
else{
printf("La cadena \"%s\" es menor que \"%s\".\n",s,t);
}
}

/*system("pause");*/
return 0;
}




