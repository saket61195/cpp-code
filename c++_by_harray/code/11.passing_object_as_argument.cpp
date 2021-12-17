#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    void setData(int v1,int v2)
    {
        a=v1; b=v2;
    }
    void sumOfcomplex(complex o1,complex o2)
    {
        a=o1.a+ o2.a;
        b=o1.b+ o2.b;

    }
    void showData()
    {
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c1.showData();
    c2.setData(4,5);
    c2.showData();
    c3.sumOfcomplex(c1,c2);
    c3.showData();
}