#include<stdio.h>


char *nombres[]={"daniel","ricardo","esteban","pablo"} ;
char **p1;
main()
{
  p1=nombres;

  printf(" %s ",nombres[0]);    
  printf(" %c ",nombres[1][2]); 
  printf(" %c ",*(*nombres+1)); 
  printf(" %c ",**(nombres+3)); 
  printf(" %c ",*(nombres[0]+3));  

  printf ("\n");

  printf(" %s ",*(p1+1));    
  printf(" %c ",*(*(p1+1)+3)); 
  printf(" %c ",*(*p1+4)); 
  printf(" %c ",**(p1+3)); 
  printf(" %c ",*(*p1+2));  

  return(0);

}

