/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the year ";
    cin >> n;
    if (n % 400 == 0)
    {
        cout << n << " is leap year ";
    }
    else if (n % 100 != 0 && n % 4 == 0)
    {
        cout << n << " is leap year ";
    }
    else
    {
        cout << n << " is not leap year";
    }
    return 0;
} */


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the year ";
    cin >> n;
    if (n % 400 == 0 ||(n % 100 != 0 && n % 4 == 0))
    {
        cout << n << " is leap year ";
    }
    else
    {
        cout << n << " is not leap year";
    }
    return 0;
}