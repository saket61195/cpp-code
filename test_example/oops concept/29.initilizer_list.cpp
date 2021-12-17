#include<iostream>
using namespace std;
class Dummy
{
    private:
    int a,b;
    const int x;
    int &y;
    public:
    Dummy(int &n):x(5),y(n)//initilizer
    {
        a=6;
        b=2;
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }


};
int main()
{
    int m=11;
    Dummy d1(m);
    d1.display();
}