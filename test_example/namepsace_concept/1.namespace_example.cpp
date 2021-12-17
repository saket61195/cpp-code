#include<iostream>
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
            cout<<"hello"<<endl;
            cout<<"a="<<a<<endl;
        }
    };
}
void Myspace::f1()
{
    cout<<"in f1"<<endl;
    cout<<a<<endl;
}
int main()
{
    Myspace::a=5;
    Myspace::Hello obj1;
    obj1.hello();
    Myspace::f1();
}