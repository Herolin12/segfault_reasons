#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char *p = malloc(3);

    int i = 0;

    for(i=0;i<0Xffffffff;i++)
    {
        p[i] = 'a';
    }

    printf("\n %s \n", p);

    return 0;
}
