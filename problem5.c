#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t, n, s, r = 0;
    scanf("%d", &t);

    for (int tst = 1; tst <= t; tst++)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &s);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == s)
            {
                r = i + 1;
                break;
            }
            else if (arr[n - 1] != s)
            {
                r = -1;
            }
            else
            {
                continue;
            }
        }
        if (r >= 0)
        {

            printf("Case %d: %d\n", tst, r);
        }
        else if (r == -1)
        {
            printf("Case %d: Not Found\n", tst);
        }
    }

    return 0;
}