#include <iostream>
using namespace std;
namespace Myspace
{
    int a;
    void f1();
    class Hello
    {
    public:
        void hello()
        {
            cout << "hello" << endl;
            cout << "a=" << a << endl;
        }
    };
}
void Myspace::f1()
{
    cout << "in f1" << endl;
    cout << a << endl;
}
using namespace Myspace;
int main()
{
    a = 5;
    Hello obj1;
    obj1.hello();
    f1();
}