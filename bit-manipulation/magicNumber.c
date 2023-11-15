#include <stdio.h>
// suppose base =5 and given number is 6 (110 in binary) we need to find 0*(base^1)+1*(base^2)+1*(base^3)
int main()
{
    int n = 6;
    int base = 5;
    int ans = 0;

    while (n > 0)
    {
        int lastDigit = n & 1; // in 1st iteration we get 0 in case of 6
        n = n >> 1;
        ans += lastDigit * base;
        base = base * 5;
    }
    printf("%d", ans);
    return 0;
}