#include<iostream>
using namespace std;

template <class t>
t add(t *x,t *y)
{
    return *x+*y;
}
int main()
{
    int a=5,b=6;
    int sum=add(&a,&b);
    cout<<sum<<endl;
    float c=7.5,d=7.6;
    cout<<add(&c,&d)<<endl;

}