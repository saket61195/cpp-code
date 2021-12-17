#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};
class complex
{
    int a, b;
    // friend int calculator ::sumRealComplex(complex, complex);
    // friend int calculator ::sumCompComplex(complex, complex);
    friend class calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void showData()
    {
        cout << "comlex number are " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2;
    c1.setData(3, 4);
    c1.showData();
    c2.setData(4, 5);
    c2.showData();

    calculator cal;
    int real = cal.sumRealComplex(c1, c2);
    cout << "sum of real complex number is " << real << endl;
    int imag = cal.sumCompComplex(c1, c2);
    cout << "sum of real complex number is " << imag << endl;
}
