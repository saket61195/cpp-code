#include<iostream>
using namespace std;
class integer 
{
    int a;
    public:
    void set_data(int x)
    {
        a=x;
    }
    void show_data()
    {
        cout<<"a="<<a<<endl;
    }

    //pre increment
    integer operator++()
    {
        integer i;
        i.a=++a;
        return i;
    }

    //post increment
    integer operator++(int)// here int is do nothing just diferenciate pre and post increment
    {
        integer i;
        i.a=a++;
        return i;
    }
};
int main()
{
    cout<<"\npre increment"<<endl;
    integer i1,i2;
    i1.set_data(3);
    i1.show_data();
    cout<<endl;
    i2=++i1;
    i2.show_data();
    i1.show_data();

cout<<"\npost increment "<<endl;
    integer i3,i4;
    i3.set_data(9);
    i3.show_data();
    cout<<endl;
    i4=i3++;
    i4.show_data();
    i3.show_data();
}
