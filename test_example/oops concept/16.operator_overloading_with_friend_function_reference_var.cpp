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
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
//  friend complex operator+(complex ,complex);
friend complex& operator+(complex& ,complex&);
};



complex& operator+(complex &x,complex &y)
    {
        //complex temp;
        x.a=x.a+y.a;
        x.b=x.b+y.b;
        return x;
    }
//   complex operator+(complex x,complex y)
//     {
//         complex temp;
//         temp.a=x.a+y.a;
//         temp.b=x.b+y.b;
//         return temp;
//     }
int main()
{
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,2);
    c3=c1+c2;   //c3=operator+(c1,c2); //in friend function only
    c3.show_data();
}