#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] >= max)
        {

            max = arr[i];
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", max - arr[i]);
    }

    return 0;
}