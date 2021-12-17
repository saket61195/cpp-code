#include <stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = n; i > 1; i--)
    {
        for (j = n; j >= 1; j--)
        {
            if (i > j)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", j);
            }
        }

        for (j = 2; j <= n; j++)
        {
            if (i > j)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }


  printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {
            if (i > j)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", j);
            }
        }
        for (j = 2; j <= n; j++)
        {
            if (i > j)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}