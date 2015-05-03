#include<stdio.h>
#include<stdlib.h>

int myFunc (char x);

int main () {

int result;
int (*myFuncPtr)(char);
myFuncPtr=myFunc;
result = (*myFuncPtr)('2');
return 0;
}

int myFunc (char x)
{
printf ("%d\n",x);
return 0;
} 
