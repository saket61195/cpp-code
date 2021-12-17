#include<iostream>
using namespace std;
class Dummy 
{
    int a,b,*p;
    public:
    void set_data(int x,int y,int z)
    {
        a=x; b=y;
        p=new int;
        *p=z;
    }
    void show_data()
    {
        cout<<"\na="<<a<<" b="<<b<<" *p="<<*p<<endl;
    }
    //copy constructor
    Dummy(Dummy &d)
    {
        a=d.a;
        b=d.b;
        p=new int;
        *p=*(d.p);
    }
    Dummy(){}
     ~Dummy()
    {
        delete p;
    }
};
int main()
{
    Dummy d1;
    d1.set_data(3,4,9);
    d1.show_data();
    Dummy d2=d1; //copy constructor call
    d2.show_data();
}