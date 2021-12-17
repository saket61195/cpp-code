#include <iostream>
#include <cmath>
using namespace std;

class simplecal
{
protected:
    int a, b;

public:
    void setSimpleCal(int c, int d)
    {
        a = c;
        b = d;
    }

    void disply()
    {
        cout << "simple calculator" << endl;
        cout << "the sum of a and b is=" << a + b << endl;
        cout << "the sub of a and b is=" << a - b << endl;
        cout << "the mul of a and b is=" << a * b << endl;
        cout << "the div of a and b is=" << a / b << endl;
    }
};

class scientific_cal
{
protected:
    int a;
    float b;

public:
    float a_ln, a_cos, a_sqrt, a_sin;

    void setSciCal(int d, float e)
    {
        a = d;
        b = e;
        a_cos = cos(b);
        a_sin = sin(b);
        a_ln = log(a);
        a_sqrt = sqrt(a);
    }
    void show();
};

void scientific_cal::show()
{
    cout << "\n scientific calculator" << endl;
    cout << "the cosine value of a is=" << a_cos << endl;
    cout << "the sine value of a is=" << a_sin << endl;
    cout << "the log value of a is=" << a_ln << endl;
    cout << "the sqrt value of a is=" << a_sqrt << endl;
}
class hybridcal : public simplecal, public scientific_cal

{
};
int main()
{
    hybridcal k;
    k.setSimpleCal(30, 15);
    k.disply();
    k.setSciCal(25, (3.14 / 2));
    k.show();
}