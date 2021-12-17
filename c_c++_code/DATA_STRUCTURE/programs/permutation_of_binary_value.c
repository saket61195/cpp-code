#include <stdio.h>
void bin(int n, char A[])
{
    if (n < 1)
        printf("\n %s ", A);
    else
    {
        A[n - 1] = '0';
        bin(n - 1, A);
        A[n - 1] = '1';
        bin(n - 1, A);
    }
}
int main(void)
{
    void bin(int, char[]);
    char A[4];
    A[3] = '\0';
    bin(3, A);
}