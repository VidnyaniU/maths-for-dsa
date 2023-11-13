#include <stdio.h>
// Given an array , every number appears twice only one number appears once find that number

int main()
{
    int unique = 0;
    int arr[9] = {2, 3, 6, 5, 3, 2, 4, 5, 6};
    for (int i = 0; i < 9; i++)
    {
        unique ^= arr[i]; // XOR all the elements in the array
    }
    printf("%d", unique);

    return 0;
}