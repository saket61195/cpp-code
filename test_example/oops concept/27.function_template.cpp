#include<iostream>
using namespace std;
template <class X>

X big(X a,X b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    cout<<big(15,8)<<endl;
    cout<<big(77.4,88.5)<<endl;
}