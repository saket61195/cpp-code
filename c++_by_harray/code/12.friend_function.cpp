#include <iostream>
using namespace std;
class complex
{
    int a, b;
    friend complex sumComplex(complex o1, complex o2);

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void showData()
    {
        cout << "sum of complex numbers are " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setData(3, 4);
    c1.showData();

    c2.setData(5, 6);
    c2.showData();

    sum = sumComplex(c1, c2);
    sum.showData();
}