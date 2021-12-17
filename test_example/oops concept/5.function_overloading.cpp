#include<iostream>
using namespace std;

inline float area(int);
inline int area(int,int,int);

float area(int a)
{
    return (3.14*a*a);
}
int area(int x,int y,int z)
{
    return (x*y*z);
}
int main()
{
    int r;
    int l,b,h;
    cout<<"enter the radius of circle ";
    cin>>r;
    cout<<"area of circle is "<<area(r)<<endl;

    cout<<"\nenter the length and breath and height  of rectangle ";
    cin>>l>>b>>h;
    cout<<"area of rectangle "<<area(l,b,h)<<endl;
}