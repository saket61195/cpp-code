#include <iostream>
using namespace std;
int i, n;
int count;
int main()
{
    for (n = 1; n < 60; n++)
    {
        count = 0;
        for (i = 2; i < n - 1; i++) //for (i = 2; i < n/2; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }

        if (count == 0 && n != 1)
        {
            cout << n << "\t";
        }
    }
}
