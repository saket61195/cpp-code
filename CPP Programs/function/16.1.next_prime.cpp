#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    // for (int i = 2; i < n; i++)
    // for (int i = 2; i <= n / 2; i++)
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int nextPrime(int n)
{
    for (int i = n + 1;; i++) // for (int i=n+1; i<1000000; i++) // ;; it means middle condtion is always true
    {
        if (isPrime(i))
        {
            return i;
            break;
        }
    }
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    cout << "next prime is " << nextPrime(n);
}