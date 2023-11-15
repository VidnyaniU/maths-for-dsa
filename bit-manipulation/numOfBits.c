#include <stdio.h>
// count number of bits in binary
int main()
{
    int count = 0;
    int num = 6;
    while (num > 0)
    {
        count += 1;
        num = num >> 1;
    }
    printf("%d", count);
    return 0;
}