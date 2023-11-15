#include <stdio.h>
#include <math.h>
// count number of bits of any number in any base
int main()
{
    int num = 65461;
    int base = 10;

    int ans = (int)(log(num) / log(base)) + 1;
    printf("%d", ans);
    return 0;
}