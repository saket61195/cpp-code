#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex()
    {
        a=10;
        b=05;
    }
    void display()
    {
        cout<<"complex number are "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1;
    c1.display();
}