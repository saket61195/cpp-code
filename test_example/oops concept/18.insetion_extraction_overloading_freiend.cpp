#include<iostream>
using namespace std;


class complex 
{
    int a,b;
    public:
    void set_data(int x,int y)
    {
        a= x; b= y;
    }
    void show_data()
    {
        cout<<"a = "<<a<<" "<<" b = "<<b<<endl;
    }
    friend istream& operator>>(istream&,complex&);//cin /// here complex& because we want to change in actual argument
    friend ostream& operator<<(ostream &,complex);//cout
    };
    ostream& operator<<(ostream &dout,complex c)
    {
        cout<<"\na="<<c.a<<" b="<<c.b<<endl;
        return dout;
    }
    istream& operator>>(istream &din,complex &c)
    {
        cin>>c.a>>c.b;
        return din;
    }


int main()
{
    complex c1;
    cout<<"enter complex number ";
    operator>>(cin,c1);
    // cin>>c1;//cin.operator>>(c1);// for friend function //operator>>(cin,c1);
    cout<<"you entered";
    // cout<<c1;//operator<<(cout,c1);
    operator<<(cout,c1);
    
}