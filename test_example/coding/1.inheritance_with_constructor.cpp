#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:
    A()
    {cout<<"A call called"<<endl;
    }

};
class B:public A
{
    public:
    B():A()
    {
        cout<<"B called"<<endl;
    }
};
int main()
{
 A obj;
//   B obj;
}