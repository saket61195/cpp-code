#include <iostream>
using namespace std;
int check_prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = flag + 1;
        }
    }
    if (flag == 0)
        return true;
    else
        return false;
}
int main()
{
    int s, d1 = 0, d2 = 0, n1 = 0, n2 = 0;
    cout << "enter any number number ";
    cin >> s;
    for (int i = s;; i++)
    {
        if (check_prime(i))
        {
            d1 = i - s;
            n1 = i;
            break;
        }
    }
    for (int i = s;; i--)
    {
        if (check_prime(i))
        {
            d2 = s - i;
            n2 = i;
            break;
        }
    }
    cout<<"nearest prime number is of "<<s<<" is "<<n1<<" and "<<n2;
    // cout<<"\n"<<"next prime is "<<n1;
    // cout<<"\n"<<"previous prime is "<<n2;
    // if (d1 <= d2)
    // {
    //     cout << "nearest prime of " << s << " is " << n1;
    // }
    // else if (d2 < d1)
    // {
    //     cout << "nearest prime of " << s << " is " << n1 << " and " << n2;
    // }
}