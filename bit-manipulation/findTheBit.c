#include <stdio.h>

// find the ith bit of a number
int main()
{
    int num = 10;
    int i = 3; // find ith bit

    printf("%d", num & (1 << (i - 1))); // using & and left shift

    return 0;
}