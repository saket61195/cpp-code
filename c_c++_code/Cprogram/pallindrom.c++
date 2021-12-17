#include <iostream>
using namespace std;
int main()
{
    int temp, rem, n, sum = 0;
    cout << "enter the number ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n = n / 10;
    }
    if (sum == temp)
        cout << "number is palliendrom\n";
    else
    {
        cout << "not palliendrom\n";
    }
}