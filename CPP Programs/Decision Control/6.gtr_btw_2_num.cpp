#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter two number ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "greater number is " << a;
    }
    else
    {
        cout << "greater number is " << b;
    }
    return 0;
}