#include <iostream>
#include <algorithm> // for sortng
#include <vector>

using namespace std;
int main()
{
    int n, k1, k2;
    cout << "enter the size of array ";
    cin >> n;
    vector<int> a(n);
    cout << "enter the element in the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nenter the element you want to search in \nupper bound and lower bound ";
    cin >> k1;
    auto ptr1 = lower_bound(a.begin(), a.end(), k1);
    auto ptr2 = upper_bound(a.begin(), a.end(), k1);
    if (ptr1 == (a.end()))
    {
        cout << "\nelement not found ";
    }
    else
    {
        cout << "lower bound of element " << k1 << " is " << (*ptr1) << endl;
    }
    if (ptr2 == (a.end()))
    {
        cout << "\nelement not found  ";
    }
    else
    {
        cout << "upper bound of element " << k1 << " is " << (*ptr2) << endl;
    }
}