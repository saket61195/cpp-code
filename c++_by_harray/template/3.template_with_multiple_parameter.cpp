#include <iostream>
using namespace std;

template <class t1, class t2>
class myClass
{
    t1 data1;
    t2 data2;

public:
    myClass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "name: "<<this->data1 << endl
             << "age: "<< this->data2 << endl;
    }
};
int main()
{
    myClass<string, int> m1("saket", 24);
    m1.display();
}