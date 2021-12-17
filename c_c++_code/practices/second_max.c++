// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, secmax = 0, min, max;
//     int a[] = {3, 2, 1, 6, 8, -1, 4, 3};
//     min = max = a[0];
//     for (i = 0; i < 8; i++)
//     {
//         if (a[i] > max)
//         {
//             max = a[i];
//         }
//         if (a[i] < min)
//         {
//             min = a[i];
//         }
//     }
//     cout << max << " \n";
//     cout << min << " ";
// }

#include <iostream>
using namespace std;
int main()
{
    int i, max, secmax;
    int a[] = {2, 12, 35, 1, 10, 34, 1, 37};
    max = secmax = INT16_MIN;
    cout << max << "\n";
    for (i = 0; i < 8; i++)
    {
        if (a[i] > max)
        {
            secmax = max;
            max = a[i];
        }
        else if (a[i] > secmax && a[i] != max)
            secmax = a[i];
    }
    cout << max << "\n";
    cout << secmax << " ";
}