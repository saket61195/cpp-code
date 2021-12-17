#include<iostream>
using namespace std;

class Rectangle
{
    int l,b;
    public:
    void set_data(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    void show_data()
    {
        cout<<"area of rectangle is "<<l*b;
    }

};
int main()
{
    Rectangle r;
    r.set_data(4,6);
    r.show_data();
}