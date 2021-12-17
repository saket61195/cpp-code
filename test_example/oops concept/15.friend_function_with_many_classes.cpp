
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void set_data(int x)
    {
        a=x;
    }
    friend void sum(A,B);

};
class B
{
    int b;
    public:
    void set_data(int y)
    {
        b=y;
    }
    friend void sum(A,B);
};
void sum(A obj1,B obj2)
{
    cout<<"sum is "<<obj1.a+obj2.b<<endl;
}

int main()
{
    A o1;
    B o2;
    o1.set_data(6);
    o2.set_data(5);
    sum(o1,o2);
}

