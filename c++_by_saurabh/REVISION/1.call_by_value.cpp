/* #include <iostream>
using namespace std;
int add(int, int);

int main()
{
    int a = 5, b = 6;
    int sum = add(a, b);
    cout << sum << endl;
}
int add(int x, int y)
{
    return x + y;
} */

#include <iostream>
using namespace std;
template <class t>
t add(t x, t y)
{
    return x + y;
}
int main()
{
    int a = 5, b = 6;
    int sum = add(a, b);
    cout << sum << endl;
    cout<<add(9.6,7.7)<<endl;
}
