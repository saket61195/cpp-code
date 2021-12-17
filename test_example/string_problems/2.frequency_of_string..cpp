#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,count=0;
    char ch[50],c;
    cout<<"\nEnter the string ";
    cin>>ch;
    cout<<"enter any character to count occurance ";
    cin>>c;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==c)
        count++;
    }
    if(ch==0)
    {
        cout<<"string naot match";
    }
    else
    {
        cout<<"\noccurance/frequancy of character "<<count<<endl;
    }
    return 0;


}