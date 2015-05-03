#include <stdio.h>
#define taylorgrade 15

double result;
double x=0.004;
double exp (int,double);
double exponential(double);
int fact (int);
int main ()
{
   result = exponential (x);
   printf ("El resultado de e^%g es aproximadamente:\n\n\t%.20g\n",x,result);
    return 0;
}
double exponential(double x)
{
    int i;
    double nextaylor,result=0;
    for(i=0;i<taylorgrade;i++)
        {
            nextaylor = (exp(i,x))/fact(i);
            result += nextaylor;
        }
    return result;
}
double exp (int i,double x)
{
    double result = x;
    switch (i)
    {
        case 0:
            return 1;
            break;
        case 1:
            return x;
            break;
        default:
            {
                for (i;(i-1)>0;i--)
                    {
                       result*=x;
                    }
                return result;
                break;
            }
    }
}
int fact (int i)
{
    int result=1;
    if (i!=0)
    {
        for(i;(i)>0;i--)
        result*=i;
        return result;
    }

    else
        return 1;
}

