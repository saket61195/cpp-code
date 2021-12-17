#include<iostream>
using namespace std;
int i,n,sum=0,count;
int main()
{
    for(n=1;n<=10;n++)
    {
        count=0;
        for(i=2;i<n-1;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==0 & n!=1)
        {
            sum=sum+n;
        }
    }
    cout<<"sum is "<<sum<<"\t";
}