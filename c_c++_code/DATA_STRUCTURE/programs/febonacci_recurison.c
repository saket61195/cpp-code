#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
int main()
{
    // printf("\n 6th term is %d ",fib(6));
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", fib(i));
    }
}