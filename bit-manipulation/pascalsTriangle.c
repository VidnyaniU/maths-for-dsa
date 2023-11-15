#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    int f;

    for (f = 1; n > 1; n--)
        f *= n;

    return f;
}
int ncr(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}
int main()
{
    int n = 6;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
            printf("  ");

        for (int j = 1; j <= i; j++)
        {
            printf("%d", ncr(i, j));
        }
        for (int j = 0; j <= n - i; j++)
            printf("  ");
        printf("\n");
    }

    return 0;
}