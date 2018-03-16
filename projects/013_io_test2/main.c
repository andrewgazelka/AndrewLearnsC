#include <stdio.h>

int main()
{
    char str[100];
    int num;
    printf("Enter a string and an integer: ");
    scanf("%s %d",str,&num);
    printf("You typed: %s %d",str,num);
}