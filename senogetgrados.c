#include<stdlib.h>
#include<stdio.h>

double sino(double,int);
double getfloat(void);
int main(void)

{
/*DECLARO VARIABLES*/

double sen;
double z,deg;
int n;

/* solicito los datos*/

printf("\nCual es el angulo en grados?\n");
deg=getfloat();
z=deg*3.14159/180;

// scanf("%lf", &z);
printf("Con que numero de terminos aproximamos la serie?\n"); 
n=getfloat();
//scanf("%d", &n);

sen=sino(z,n);

/*impresion de resultados*/

printf("\nsin(%.2lf)=%lf\n\n",deg,sen);
return 0;
}

double sino(double z, int n)
{
int i;
double sen, termino;
for(sen=0,termino=z,i=1;i<=n;i++)
{
sen += termino;
termino= -termino*z*z/(2*i+1)/(2*i);
}

return sen;
}

double getfloat (void)
{
        double num,i;
        int c;
        int nega;
        if ((c=getchar()) == '-')
                nega=1;
        else
                num=(c-'0');
        for(;(c=getchar()) != '\n';)
        {
                if ((c=='.') || (c==','))
                        break;
                num=(num*10)+(c-'0');
        }
        if ((c=='.') || (c==','))
                for (i=10; ((c=getchar()) != '\n');i=(i*10))
                {
                        num= (num+((c-'0')/i));
                }
        if( nega == 1 )
        num=(num)*-1;

        return num;

}







