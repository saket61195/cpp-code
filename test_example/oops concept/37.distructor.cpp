#include<iostream>
using namespace std;
class Dummy
{
    private:
    int a,b;
    int *p;
    public:
    Dummy()
    {
        p= new int;
    }
    void set_data(int x,int y,int z)
    {
        a=x; b=y; *p=z;
    }
    void show_data()
    {
        cout<<" a = "<<a<<",b = "<<b<<",p = "<<*p;
    }
    Dummy(Dummy &d)
    {
        a=d.a; b= d.b;
        p=new int;
        *p=*(d.p);
    }
    ~Dummy()
    {
        delete p;
    }
};
int main()
{
    Dummy d1;
    d1.set_data(3,4,5);
    Dummy d2=d1;
    d2.show_data();
}

