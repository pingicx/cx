#include <stdio.h>
//#include <stdlib.h>
#include<string.h>


void mystrcat(char *a,char *b);
//    char *strg1="Impresionante";
    char *strg1;
  //char *strg2="mente";
    char *strg2;



int main(int argc, char** argv) {
//   char *strg1[]={"Impresionante"};
//   char *strg2[]={"mente"};
//   char *strg1={"Impresionante"};
//   char *strg2={"mente"};

   char g1[]={"Impresionante"};
   char g2[]={"mente"};
strg1=g1;
strg2=g2;


    
   mystrcat(strg2,strg1);
//strcat(strg2,strg1);
   
// printf("%s",*strg1);
    printf("%s",strg2);
}

void mystrcat(char *a, char *b)


{
    int i,j;
    
    for(i=0;a[i]!='\0';i++);
     for(i,j=0;b[j]!='\0';i++,j++);
       a[i]=b[j];
        a[i]=b[j];
        
}        

