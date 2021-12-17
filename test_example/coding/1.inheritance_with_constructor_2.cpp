#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    A(int k)
    {
        a=k;
        cout<<"A call called"<<endl;
    }

};
class B:public A
{
    int b;
    public:
    B():A(5)
    {
        cout<<"B called"<<endl;
    }
};
int main()
{

B onj1;
}