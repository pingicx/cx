#include <stdio.h>
/*char bin[]={"101011"};*/

char *bin="101011";

void Bin2Hex(char []);

int main()
{
Bin2Hex(bin);
return 0;

}
/*/La salida sera 0x2B*/

void Bin2Hex(char bin[])
{
char *a=bin;
int num=0; int b;
do{ b =*a=='1'?1:0;
	num=(num<<1)|b;
	a++;
} while(*a);
printf("Ox%X \n",num);
}
