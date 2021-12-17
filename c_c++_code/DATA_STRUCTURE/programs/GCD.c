#include <stdio.h>

int GCD(int a, int b)
{
    if (a == b)
        return a; //return b;
    if (a % b == 0)
        return b;
    if (b % a == 0)
        return a;
    if (a > b)
        return GCD(a % b, a);
    else
        return GCD(a, b % a);
}
int main()
{
    printf(" GCD of 105 and 91 is  %d ", GCD(105, 91));
}