#include<iostream>
using namespace std;
class Dummy 
{
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x; b=y;
    }
    void show_data()
    {
        cout<<"\na="<<a<<"b="<<b<<endl;
    }
    //copy constructor
    Dummy(Dummy &d)
    {
        a=d.a;
        b=d.b;
    }
    Dummy(){}
};
int main()
{
    Dummy d1;
    d1.set_data(3,4);
    d1.show_data();
    // Dummy d2=d1; copy constructor call
    // Dummy d2(d1);
    Dummy d2;
    d2=d1;// implict copy assignement operator here copy constructor will not call
    d2.show_data();
}