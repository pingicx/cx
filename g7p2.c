#include <stdio.h>


void f1(void);
void f2(void);
void f3(void);

typedef void (*PF)(void);

PF arp[]={f1,f2,f3};


void main(void)
{

char c; 
 c=getchar()-1;

arp[c-'0']();

}

void f1(void)
{

printf("f1\n") ;

}

void f2(void)
{

printf("f2\n") ;

}


void f3(void)
{

printf("f3\n") ;

}
