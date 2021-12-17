// * The first line of the input contains an integer N.The next line contains  space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    vector<int> v;
    int i, x, y = 0;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cin >> y;
        v.push_back(y);
    }

    // * used to delete index from the vector

    int erase1, erase2;

    // * index deleted

    cin >> erase1;
    v.erase(v.begin() + erase1 - 1);

    // * here two value enter to delete the range like 2 to 4

    cin >> erase1 >> erase2;
    v.erase((v.begin() + erase1 - 1), v.begin() + erase2 - 1);

    // *size return number of element in the vector

    cout << v.size() << "\n";

    // * prit all value from vector

    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
