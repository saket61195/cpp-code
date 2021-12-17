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
   friend complex operator-(complex);
  
};

complex operator-(complex c1)
  {
        complex temp;
        temp.a= -c1.a;
        temp.b= -c1.b;
        return temp;
    }

int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,2);
    c3=-c1;          //c3=c1.operator-();
    c3.show_data();
}