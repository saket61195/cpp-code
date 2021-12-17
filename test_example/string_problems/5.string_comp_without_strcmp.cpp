#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int flag=0,i;
    char s1[20],s2[20];
    cout<<"enter string s1 ";
    cin>>s1;
    cout<<"enter string s2 ";
    cin>>s2;
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"string not same"<<endl;
    }
    else
    {
        cout<<"string is same"<<endl;
    }
}