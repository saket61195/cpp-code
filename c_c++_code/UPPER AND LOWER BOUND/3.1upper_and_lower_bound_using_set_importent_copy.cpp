
#include <iostream>
#include <algorithm> // for sortng
#include <set>

using namespace std;
int main()
{
    int n, k1, k2;
    set<int> s;
    for (int i = 0; i < (int)(1e6); i++)
    {
        s.insert(rand());
    }
    auto ptr1 = s.lower_bound(rand());
    auto ptr2 = s.upper_bound(rand());
    if (ptr1 == (s.end()))
    {
        cout << "\nelement not found ";
    }
    else
    {
        cout << "lower bound of element " << k1 << " is " << (*ptr1) << endl;
    }
    if (ptr2 == (s.end()))
    {
        cout << "\nelement not found  ";
    }
    else
    {
        cout << "upper bound of element " << k1 << " is " << (*ptr2) << endl;
    }
}