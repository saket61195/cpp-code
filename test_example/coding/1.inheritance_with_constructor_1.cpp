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
    B(int x,int y):A(x)
    {
        b=y;
        cout<<"B called"<<endl;
    }
};
int main()
{
  B obj(2,3);
}