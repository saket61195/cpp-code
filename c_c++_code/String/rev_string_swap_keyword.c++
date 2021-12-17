#include<iostream>
using namespace std;
int main()
{
    /*

    int i;
    string s1="i am not a terrorist";
    int len=s1.length();
    int n=len-1;
    for(i=0;i<len/2;i++)
    {
        swap(s1[i],s1[n]);
        n=n-1;
    }
    cout<<s1<<"\n";
    
    */


/*
    int i;
    string s1="i am not a terrorist";
    int len=s1.length();
    int n=len-1;
    for(i=0;i<len/2;i++)
    {
       char temp=s1[i];
       s1[i]=s1[n];
       s1[n]=temp;
       n=n-1;


    }
    cout<<s1<<"\n";
    
*/


    int i=0;
    string s1="i am not a terrorist";
    int len=s1.length();
    int n=len-1;
    while(i<=n)
    {
        swap(s1[i],s1[n]);
        n=n-1;
        i=i+1;
    }
    cout<<s1<<"\n";
}

