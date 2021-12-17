#include<iostream>
using namespace std;
class Dummy
{
    private:
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a=x; b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<"b="<<b;
    }
};
int main()
{
    Dummy d1;
    d1.set_data(3,4);
    Dummy d2=d1;
    d2.show_data();
}