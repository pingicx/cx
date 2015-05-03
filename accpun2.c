#include<stdio.h>
#include<stdlib.h>

int  main(void)
{
char arr[]={'1','3','5'}, *p;
//int arr[]={1,3,5}, *p;


//p=&arr[0];
p=arr;
//printf("%c %c %c\n",*p,*(p+1),*(p+2));
*p=(*p)++;
printf("%d %d %d\n",*p,*(p+1),*(p+2));
//printf("%c %c \n",*p+1,*(p+1));
//printf("%d \n",(*p)++);



}


