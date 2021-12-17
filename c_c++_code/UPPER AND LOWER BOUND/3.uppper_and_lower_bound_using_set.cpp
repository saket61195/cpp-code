#include <iostream>
#include <algorithm> // for sortng
#include <set>

using namespace std;
int main()
{
    int n, k1, k2;
    cout << "enter the size of array ";
    cin >> n;
    set<int> s;
    cout << "enter the element in the array ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto it = s.begin(); it != s.end(); ++it)

    {
        cout << ' ' << *it;
    }

    cout << "\nenter the element you want to search in \nupper bound and lower bound ";
    cin >> k1;
    auto ptr1 = s.lower_bound(k1); // correct method
    auto ptr2 = s.upper_bound(k1); // correct method
    
    // auto ptr1 = lower_bound(s.begin(), s.end(), k1);  //wrong method
    // auto ptr2 = upper_bound(s.begin(), s.end(), k1); //wrong method
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