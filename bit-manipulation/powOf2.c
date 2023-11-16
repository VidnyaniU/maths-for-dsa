// you are given a number find out if its power of 2 or not
#include <stdio.h>
int main()
{
    int n = 31;

    // naive approach
    // int count = 0;
    // while (n > 0)
    // {
    //     int rn = n >> 1;
    //     if (rn == 1)
    //         count += 1;
    // }
    // count == 1 ? printf("yes!") : printf("no!");

    // better approach
    if ((n & (n - 1)) == 0)
        printf("yes!");
    else
        printf("no!");
    return 0;
}