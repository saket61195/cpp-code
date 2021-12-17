#include <iostream>
using namespace std;

void swapkaro(int*, int*);
void swapkaro(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a, b;
    cout << "enter two number ";
    cin >> a >> b;
    swapkaro(&a, &b);
    cout << a << " " << b << "\n";
}
