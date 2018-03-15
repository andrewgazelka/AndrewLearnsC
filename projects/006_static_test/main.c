#include <stdio.h>

void inc(void);

int a = 0;
static int b = 0; // note the only difference is this cannot be accessed globally https://stackoverflow.com/a/959904/4889030
main()
{
    for (int i = 0; i < 5; i++)
    {
        inc();
    }
    printf("a: %d, b: %d", a, b);
}

void inc(void)
{
    a++;
    b++;
}