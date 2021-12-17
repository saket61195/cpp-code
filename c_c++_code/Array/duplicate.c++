#include<iostream>
using namespace std;

int main()
{
    int i,j;
// int a[10]={1,2,3,4,5,6,2,2,3,4};
int a[10]={1,2,2,3,3,5,6,6,4,4};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if((a[i]==a[j]) && (i!=j))// no need of && (i!=j)
            cout<<a[i]<<" ";
        }
    }
}


//note:: not work properly when duplicate value is more than 2(bruteforce algorithm)