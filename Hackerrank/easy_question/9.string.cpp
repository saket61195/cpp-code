// * In the first line print two space-separated integers, representing the length of a and b respectively.
// * In the second line print the string produced by concatenating a and  b(a+b).
// * In the third line print two strings separated by a space, a' and b'. a' and b' are the same as  a and b, respectively, except that their first characters are swapped.

#include <iostream>
using namespace std;
void swapp(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()

{
    string a, b;
    cin >> a >> b;
    int l1, l2;
    l1 = a.length();
    l2 = b.length();
    cout << l1 << " " << l2 << endl;
    string c = a + b;
    cout << c << endl;
    swapp(&a[0], &b[0]);
    // swap(a[0],b[0]);  // * using inbulid swap function


// without using function
    /* char x=a[0];
    a[0]=b[0];
    b[0]=x; */


    cout << a << " " << b;
    return 0;
}
