#include <stdio.h>
#include <string.h>

int main()
{
    char swerve[20] = "Swerve";
    char mechanuum[20] = "Mechanuum";

    strcat(mechanuum,swerve);
    printf("output: %s",mechanuum);
}