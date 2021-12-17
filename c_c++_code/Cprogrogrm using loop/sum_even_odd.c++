#include<iostream>
using namespace std;
int n,sum=0;
int main()
{
    for(n=1;n<=10;n++)
    {
        if(n%2==0)
        {
            sum=sum+n;
        }
    }
    cout<<"sum of even "<<sum<<"\n";
}