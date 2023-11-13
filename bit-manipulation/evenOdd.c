#include <stdio.h>

// check if the given number is even or odd

int main()
{
    int n = 6;
    if (n & 1 == 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}