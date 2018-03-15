#include <stdio.h>

void main()
{
    int a;
    int *b; // points to a random loc
    b = &a; // points to `a`
    *b = 3; // variable pointed by a is 3
    printf("a: %d, *b: %d, b: %d", a, *b, b);
}