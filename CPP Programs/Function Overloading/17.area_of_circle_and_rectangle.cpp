#include <iostream>
using namespace std;

int area(int, int);
float area(int);

int main()
{
    int l, b;
    cout << "enter length and breadth ";
    cin >> l >> b;
    cout << "area of the rectangle " << area(l, b);
    float r;
    cout << "\nenter the radius of the circle ";
    cin >> r;
    cout << "area of the circle " << area(r);
}

int area(int x, int y)
{
    return x * y;
}
float area(int k)
{
    return 3.14 * k * k;
}