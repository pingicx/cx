#include <stdio.h>


	struct B;
	
struct A
{
	int data1;
	struct B *pb;
};

struct B
{
	int data2;
	struct A *pa;
};


void main (void) {

struct A soya;
struct B soyb;

soya.data1=10;
soya.pb=&soyb;

soyb.data2=20;
soyb.pa=&soya;

printf("Soya tiene en data1:%d y soyb tiene en data2:%d\n",soya.data1,soya.pb->data2);
printf("Soyb tiene en data2:%d y soya tiene en data1:%d\n",soyb.data2,soyb.pa->data1);


}


