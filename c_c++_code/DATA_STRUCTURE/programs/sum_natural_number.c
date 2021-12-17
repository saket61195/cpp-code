#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("enter the number ");
    scanf("%d", &n);
    if (n <= 0)
    {
        return -1;
    }
    while (n != 0)//while(n>0)
    {
        sum = sum + n;
        n--;
    }
    printf("%d\n", sum);
}