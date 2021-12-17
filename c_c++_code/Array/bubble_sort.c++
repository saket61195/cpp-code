#include <iostream>
using namespace std;
int i, j, n, temp = 0;
int main()
{

    cout << "enter the size of element in array "
         << "\n";
    cin >> n;
    int a[n];
    cout << "enter the element in array \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        // for (j = 0; j < n - 1; j++)
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}