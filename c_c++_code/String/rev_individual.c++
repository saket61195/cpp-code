#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 0, l = 0;
    char a[16] = "my name is khan";
    char b[17] = {'\0'};
    int len = strlen(a);
    cout << len << "\n";
    for (i = 0; i <= len; i++)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            for (j = i - 1; j >= l; j--)
            {
                b[k++] = a[j];
            }
            b[k++] = ' ';
            l = i + 1;
        }
    }
    cout << b;
}
