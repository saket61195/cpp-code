#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3;
    cout << n1<<" " << n2<<" ";
    for (int i = 2; i <= 10; i++)
    {
        n3 = n1 + n2;
        cout << n3<<" ";
        n1=n2;
        n2=n3;
    }
}