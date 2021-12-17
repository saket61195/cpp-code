#include <iostream>
using namespace std;

template <class t>
void swapp(t &a, t &b)
{
    t temp;
    temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>
float avgFun(t1 a, t2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    float a;

    a = avgFun(3.2, 6);
    cout << a << endl;
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << " " << y << endl;
}