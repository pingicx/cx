/*

  Exercise 5-3. Write a pointer version of the function strcat that we showed in 
                Chapter 2: strcat(s,t) copies the string t to the end of s.

  implementation from chapter 2:

/ * strcat:  concatenate t to end of s; s must be big enough * /
void strcat(char s[], char t[])
{
  int i, j;

  i = j = 0;
  while (s[i] != '\0')  / * find end of s * /
    i++;
  while ((s[i++] = t[j++]) != '\0')  / * copy t * /
    ;
}


  Author : Bryan Williams 

*/


/* strcat:  concatenate t to end of s; s must be big enough; pointer version */
void strcat(char *s, char *t)
{
  /* run through the destination string until we point at the terminating '\0' */ 
  while('\0' != *s)
  {
    ++s;
  }

  /* now copy until we run out of string to copy */
  while('\0' != (*s = *t))
  {
    ++s;
    ++t;
  }

}

#define DRIVER         6

#if DRIVER
#include <stdio.h>

int main(void)
{
  char S1[8192] = "Mas vale pajaro";
  char S2[8192] = " en mano que cien volando";


  printf("El primer string es (%s)\n", S1);
  printf("El segundo string es (%s)\n", S2);
 
  strcat(S1, S2);
  printf("El string combinado es (%s)\n", S1);

  return 0;
}

#endif
