#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the three ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "greater number is " << a;
    }
    else if (b > a && b > c)
    {
        cout << "greater number is " << b;
    }
    else
    {
        cout << "greater number is " << c;
    }
    return 0;
}