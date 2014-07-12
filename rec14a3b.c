#include <stdio.h>

#define A **(cur_name+i) 	
#define B *(cur_age+i)

int edades[] = {23, 43, 12};
char *nombres[] = {"Alan", "Frank","Mary"};

int main(int argc, char *argv[])
{

    int count = sizeof(edades) / sizeof(edades[0]);
    int i = 0;

    int *cur_age = edades;
    char **cur_name = nombres;
   
    for(i = 0; i < count; i++) {
        printf("%s tiene %d años.\n", A, B);
    }

}
