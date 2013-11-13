#include <stdio.h>
char myname[][10]={{"Daniel"},{"Gabriel"},{"Claudio"}};

int main(void)						
{

printf(" My name3 is:%s\n",&myname[0][3]);
printf(" My name2 is:%s\n",&myname[1]);
printf(" My name3 is:%s\n",&myname[1][0]);
printf(" My name3 is:%s\n",myname[0]+3);
}
