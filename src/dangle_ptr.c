#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char *p = malloc(3);

    *p = 'a';
    *(p+1) = 'b';
    *(p+2) = 'c';

    free(p);

    *p = 'a';
}
