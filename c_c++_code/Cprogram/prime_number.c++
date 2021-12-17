#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0;
    cout << "enter the number ";
    cin >> n;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && n != 1)
    {
        cout << "number is prime";
    }
    else
    {
        cout << "number not prime";
    }
}