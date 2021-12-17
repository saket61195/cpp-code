#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0;
    char a[] = "I Love Coding";
    char temp;
    int len = strlen(a);
    cout << len << "\n";
    for (i = 0; i <= len; i++)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            for (j = i - 1; j >= k; j--)
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
                k++;
            }
            k = i + 1;
        }
    }
    cout << a<<" ";
}
