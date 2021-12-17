#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k=0,l=0,m=0;
   
    // string a;
    // cout<<"enter the paragraph ";
    // getline(cin, a);
    // int len=a.length();
    
    // char a[100];
    // cout<<"enter the name ";
    // cin.get(a,100);
    
   char a[]="My name is khan";
    
    char temp;
    int len =strlen(a);
    
    cout<<len<<"\n";
    cout<<a<<"\n";
    for(i=len;i>=0;i--)
    {
       cout<<a[i];
    
    }
    cout<<"\n";
    for(j=0;j<=len;j++)
    {
        if(a[j]==' '||a[j]=='\0')
        {
            for(k=j-1;k>=l;k--)
            {
                temp=a[k];
                a[k]=a[l];
                a[l]=temp;
                l++;
            }
            l=j+1;
        }
    }
    cout<<a<<"\n";

}