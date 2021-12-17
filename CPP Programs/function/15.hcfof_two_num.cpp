/* #include <iostream>
using namespace std;
int main()
{
    int a, b, h;
    cout << "enter two number ";
    cin >> a >> b;
    for (h = a < b ? a : b; h >= 1; h--)
    {
        if (a % h == 0 && b % h == 0)
        {
            break;
        }
    }
    cout << "hcf  of " << a << " and " << b << " is " << h;
} */
#include <iostream>
using namespace std;

int hcf(int x, int y)
{
    int h;
    for (h = x < y ? x : y; h >= 1; h--)
    {
        if (x % h == 0 && y % h == 0)
        {
            break;
        }
    }
    return h;
}

int main()
{
    int a, b;
    cout << "enter two number ";
    cin >> a >> b;

    cout << "hcf  of " << a << " and " << b << " is " << hcf(a, b);
}