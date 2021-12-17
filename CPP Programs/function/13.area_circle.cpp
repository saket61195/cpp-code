#include <iostream>
using namespace std;
int area(int R)
{
    return 3.14 * R * R;
}
int main()
{
    int r;
    cout << "enter the radius of the circle ";
    cin >> r;
    cout << "area of the circle is  " << area(r);
}