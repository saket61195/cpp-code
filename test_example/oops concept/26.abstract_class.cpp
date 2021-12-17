#include<iostream>
using namespace std;
class A
{
    public:
    virtual void f1()=0; //pure virtual function
    void f2()
    {
        cout<<"parent class of f2 call "<<endl;
    }
};
class B: public A
{
    public:
    void f1()
    {
        cout<<"chid class of f1 call"<<endl;
    }
    void f2()
    {
          cout<<"chid class of f2 call"<<endl;
    }
};
int main()
{
    A *p;
    B o2;
    p=&o2;
    p->f1();
    p->f2();

}