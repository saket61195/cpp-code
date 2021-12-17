/* #include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cout << "enter the number ";
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = flag + 1;
        }
    }
    if (flag == 0)
    {
        cout << "prime number ";
    }
    else
    {
        cout << "non prime number ";
    }
} */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, flag = 0;
    cout << "enter the number ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = flag + 1;
        }
    }
    if (flag == 0)
    {
        cout << "prime number ";
    }
    else
    {
        cout << "non prime number ";
    }
}