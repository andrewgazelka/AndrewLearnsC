#include <stdio.h>

main()
{
    int a = 3;
    int *b = &a;
    printf("*b: %d, b: %d",*b,b);
}