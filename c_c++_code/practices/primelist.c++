#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
        for (i = 1; i <= n; i++)
        {
            int count = 0;
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    count++;
            }
            if (count == 0 && i>=2)
                cout << i<<"\t";
        }
}