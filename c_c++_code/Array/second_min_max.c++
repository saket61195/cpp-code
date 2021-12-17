#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, -1, 25};
    int i, j;
    int x = 0;
    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (a[i] < a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    cout << "second largest " << a[1] << "\n";
    cout << "second smallest " << a[7-2] << "\n";
}