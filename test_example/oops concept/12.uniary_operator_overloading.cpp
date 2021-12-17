#include<iostream>
using namespace std;


class complex 
{
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a= x; b= y;
    }
    void show_data()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
    complex operator-()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
};


int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,2);
    c3=-c1;          //c3=c1.operator-();
    c3.show_data();
}