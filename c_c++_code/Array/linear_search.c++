#include <iostream>
using namespace std;
int main()
{
    int i, n,found=0;
    cout << "enter the size of array ";
    cin >> n;
    int a[n];
    cout << "enter the element in the array ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int element;
    cout << "enter the element you want to search ";
    cin >> element;
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            cout << "element at found at index " << i << endl;
            found=1;
            break;
        }
    }
    if(found==0)
    // if (i == n)
    {
        cout << "element not found ";
    }
    return 0;
}
