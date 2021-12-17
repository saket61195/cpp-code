#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=n-1;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}