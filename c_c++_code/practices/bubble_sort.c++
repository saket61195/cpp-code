#include<iostream>
using namespace std;
int main()
{
    int a[]={3,2,1,6,7,8};
    int temp=0;
    int l=sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;   
            }
        }
    }
    for(i=0;i<l;i++)
    {
        cout<<a[i]<<" ";
    }
}