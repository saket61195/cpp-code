#include <iostream>
using namespace std;
int main()
{
    int rem, n, sum = 0;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    cout << sum << "\n";
    if (sum == temp)
    {
        cout << "palindrom";
    }
    else
    {
        cout << "not pallindrom";
    }
}
