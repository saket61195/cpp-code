// * Print the  integers of the array in the reverse order, space-separated on a single line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        // cin >> ar[i];
        cin >> *(ar + i);
    }
    for (int i = size - 1; i >= 0; i--)
    {
        // cout << ar[i] << " ";
        cout << *(ar + i) << " ";
    }
    return 0;
}
