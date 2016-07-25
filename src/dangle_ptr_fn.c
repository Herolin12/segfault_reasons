#include<string.h>

void func(char ** argv)
{
    char arr[2];
    strcpy(arr, argv[1]);

    return;
}

int main(int argc, char *argv[])
{
    func(argv);
    return 0;
}
