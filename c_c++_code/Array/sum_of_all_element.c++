#include<iostream>
using namespace std;
int i,n,sum=0;
int main()
{
    
    cout<<"enter the size of element in array "<<"\n";
    cin>>n;
    int a[n];
    cout<<"enter the element in array \n";
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum of array is "<<sum<<"\t";
    cout<<"\n"<<"size of array is "<<sizeof(a)/sizeof(int)<<"\n";
}