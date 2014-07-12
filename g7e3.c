#include<stdio.h>
int main(void)
{
int a=5;
void *p=&a;
void **pp=&p;
printf("pp:%p\n",pp);
printf("*pp:%p\n",*pp);
printf("**pp:%d\n",**((int***)(pp)));

return 0;
}
