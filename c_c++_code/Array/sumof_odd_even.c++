#include<iostream>
using namespace std;
int main()
{
    int evesum=0;
    int oddsum=0;
    int a[11]={1,2,3,4,5,6,7,8,9,10,11};
    int i,n;
    for(i=0;i<=10;i++)
    {
        if(a[i]%2==0)
        {
            evesum=evesum+a[i];
        }
        else
        {
           oddsum=oddsum+a[i];
        }
        
    }
    cout<<"\n"<<evesum<<"\n"<<oddsum<<"\n";
}