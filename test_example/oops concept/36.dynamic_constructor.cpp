#include<iostream>
using namespace std;
class Dummy 
{
    int a,b,*p;
    public:
    Dummy(int x,int y,int z)
    {
         a=x; b=y;
        p=new int;
        *p=z;
    }
    void show_data()
    {
        cout<<"\na="<<a<<" b="<<b<<" *p="<<*p<<endl;
    }
    
};
int main()
{
    Dummy d1(3,4,9);//dynamic constructor
    d1.show_data();
}