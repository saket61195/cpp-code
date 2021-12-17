#include <iostream>
using namespace std;
int fact(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int a;
    cout << "enter a number : ";
    cin >> a;

    cout << "factorial of " << a << " is " << fact(a) << endl;
    cout << "fibbonai series at index " << a << " is " << fib(a);
}
