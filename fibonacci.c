#include <stdio.h>
int fibIter(int n)
{
    int n1 = 0, n2 = 1, n3, i;
    if (n <= 1)
    {
        return n;
    }

    for (int i = 2; i <= n; ++i)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return n3;
}
int main()
{
    int ans = fibIter(5);
    printf("%d ", ans);
    return 0;
}