#include <stdio.h>
long fact(int n)
{
    if (n > 0)
        return (n * fact(n - 1));
    else
        return 1;
}
int main()
{
    printf("factorial of 5 is %ld ", fact(5));
}