#include<stdio.h>


void main(void)
{
 int x,*px;
 px=&x;
*px=0;
*px=*px+3;
x=*px+1;
*px*=x*2;
printf("%d %d\n",x,*px);
return 0;
}
