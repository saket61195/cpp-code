#include<iostream>
using namespace std;
class complex
{
    // int a,b;
    public:
    int a,b;
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    // complex operator +(complex c1)
    // {
    //     complex temp;
    //     temp.a=a+c1.a;
    //     temp.b=b+c1.b;
    //     return temp;
    // }
};
 complex operator +(complex c1,complex c2)
    {
        complex temp;
        temp.a=c1.a+c2.a;
        temp.b=c1.b+c2.b;
        return temp;
    }
int main()
{
    complex c1,c2,c3;
    c1.set_data(2,4);
    c2.set_data(3,5);
    c3= c1+c2;
    c3.show_data();
}
