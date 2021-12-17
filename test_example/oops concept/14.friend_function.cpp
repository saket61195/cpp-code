#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    friend void sum(complex);
};

void sum(complex c)
{
    cout<<"sum is "<<c.a+c.b<<endl; //cannot access directly 
}

int main()
{
    complex  c1;
    c1.set_data(3,4);
    c1.show_data();
    sum(c1);
}