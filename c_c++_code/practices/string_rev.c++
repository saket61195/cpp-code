#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    string s = "my name is khan";
    string rev;
    char b[100];
    int l = s.length();
    cout << l;
    for (i = l - 1; i >= 0; i--)
    {
        rev = rev + s[i];
    }
    cout << rev << " ";
}