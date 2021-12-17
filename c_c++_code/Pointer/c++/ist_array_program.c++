#include<iostream>
using namespace std;
int main()

{
    int a[5],*p,i;
    p=&a[0];
    for(i=0;i<6;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<6;i++)
    {
       cout<<*(p+i)<<" ";
    }
}