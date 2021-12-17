#include <iostream>
// #include <math.h>//c
#include <cmath>
using namespace std;
class point
{
    int x, y;
    friend double distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
};
double distance(point p1, point p2)
{
    double result;
    result = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
int main()
{
    point p1(3, 5);
    p1.display();
    point p2(6, 7);
    p2.display();
    double result = distance(p2, p1);
    cout << "distance between two lines are " << result << endl;
    return 0;
}