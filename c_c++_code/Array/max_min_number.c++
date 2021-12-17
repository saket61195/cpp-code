#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,-1,25};
int min=0;
int max=0;

int i;   
    for (i=0;i<7;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"min number is "<<min<<" \n";
    cout<<"max number is "<<max<<"\n ";

}