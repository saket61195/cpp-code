#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex( int x,int y)
    {
        a=x; b=y;
    }
    void display()
    {
        cout<<"complex number are "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1(3,4);
    c1.display();
    complex c2 = complex(7,8);
    c2.display();
}