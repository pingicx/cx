#include<stdio.h>
int main(void)
{
int a=257;
void *p;
printf("a:%d\n",a);
p=&a;
*((char *)p)=5;
printf("a:%d\n",a);

return 0;
}



