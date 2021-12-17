#include <iostream>
using namespace std;
int main()
{
    int i, n, count = 0;
    cin >> n;
    if(n<=1)
    {
        printf("not prime");
        return 0;
    }
    
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0 && n!=1)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }
}
