#include<iostream>
using namespace std;
int sum(int,int,int=0);//default argument
int sum(int x,int y,int z)
{
    return (x+y);
}
int main()
{
    int a,b,c;
    cout<<"enter two number ";
    cin>>a>>b>>c;
    
    cout<<"sum is "<<sum(a,b)<<endl;
    cout<<"sum is "<<sum(a,b,c);
}