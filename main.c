#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 300;

    int *pi=&i;
    char *pc = (char*)pi;

    printf("%i,%i,%i\n",i,*pi,i,*pc);

    return 0;
}