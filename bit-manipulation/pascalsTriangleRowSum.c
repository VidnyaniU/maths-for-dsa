#include <stdio.h>
#include <math.h>

// find sum of nth row in pascals triangle

int main()
{
    int x = 1;
    int y = 1;
    int n = 4;
    int ans = 0;

    for (int i = 0; i < 3; i++)
    {
        ans = pow((x + y), n - 1);
    }

    printf("%d", ans);
    return 0;
}
