#include <stdio.h>

union Data
{
    unsigned int i:1;
    char c;
};
int main()
{
    union Data data;
    printf("size: %d\n", sizeof(data));
    data.i = 1;
    printf("i: %d\n", data.i);
    data.c = 'A';
    printf("c: %d\n", data.c);
    printf("i: %d\n", data.i); // same but usually won't be
    return 0;
}