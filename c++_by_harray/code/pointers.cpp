#include<iostream>
using namespace std;
int main()
{
    int a,*b;
    a=15;
    b=&a;
    int**c =&b;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<&c<<endl;
    cout<<**c<<endl;
}