#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 20; i++)
    {
        cout << i << endl;
        if (i == 4)
            break;
    }
    cout<<"\n\n";
    for (int j = 0; j < 11; j++)
    {
        if (j == 6)
            continue;
        cout << j << endl;
    }
}