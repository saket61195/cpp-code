#include <iostream>
using namespace std;
class base
{
public:
    virtual int func() = 0;
};
int base::func()
{
    cout << "called for base class  ";
}

class derived : public base
{
public:
    derived()
    {
        base::func();
    }
    int func()
    {
        cout << "Called for derived class";
    }
};

int main()
{
    derived *pbase = new derived;
    pbase->func();
    return 0;
}