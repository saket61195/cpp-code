#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
int main()
{
    int r;
    cout<<"Enter the radius of circle ";
    cin>>r;
    float A1=area(r);
    cout<<"Area of circle is "<<A1<<endl;
    
    int l,b;
    cout<<"Enter the length and breath of circle ";
    cin>>l>>b;
    int A2 = area(l,b);
    cout<<"Area of rectangle is "<<A2<<endl;
}