#include <iostream>
#include <algorithm> // for sortng
using namespace std;
int main()
{
    int n, k1, k2;
    cout << "enter the size of array ";
    cin >> n;
    int a[n];
    cout << "enter the element in the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nenter the element you want to search in \nupper bound and lower bound ";
    cin >> k1;
    int *ptr1 = lower_bound(a, a + n, k1);
    int *ptr2 = upper_bound(a, a + n, k1);
    if (ptr1 == (a + n))
    {
        cout << "element not found ";
    }
    else
    {
        cout << "lower bound of element " << k1 << " is " << (*ptr1) << endl;
    }
    if (ptr2 == (a + n))
    {
        cout << "element not found ";
    }
    else
    {
        cout << "upper bound of element " << k1 << " is " << (*ptr2) << endl;
    }
}