#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                if (((n + 1) / 2) == j)
                {
                    printf("#");
                }
                else
                {
                    if (((n + 1) / 2) == i)
                    {
                        printf("#");
                    }
                    else
                    {

                        printf("*");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}