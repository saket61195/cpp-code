#include<iostream>
using namespace std;
template <class t>
t add(t &x,t &y)
{
    return x+y;
}
int main()
{
    int a=5,b=6;
    cout<<add(a,b)<<endl;
}