#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,25,7,38,9};
int max=0;

int i;   
    for (i=0;i<9;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"max number is "<<max<<" ";

}