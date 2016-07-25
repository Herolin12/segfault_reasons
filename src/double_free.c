#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char *p = malloc(8);


    free(p);
    free(p);
    return 0;
}
