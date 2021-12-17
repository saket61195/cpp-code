#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,-1};
int min=0;

int i;   
    for (i=0;i<6;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"min number is "<<min<<" ";

}