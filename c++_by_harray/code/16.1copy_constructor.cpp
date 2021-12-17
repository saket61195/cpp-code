#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z2;
    x.display();//0
    y.display();//0
    z.display();//45

    cout << "\n";
    Number z1(z); // Copy constructor invoked
    z1.display();//44

    cout << "\n";
    z2 = z; // Copy constructor not called
    z2.display();//45 

    cout << "\n";
    Number z3 = z; // Copy constructor invoked
    z3.display();//45

    // z1 should exactly resemble z  or x or y

    return 0;
}
