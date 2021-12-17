#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ch;
    int l;
    string str;
    cout<<"enter the string ";
    // cin>>str;
    getline(cin,str);
    // l=str.size();
    l=str.length();
    for(int i=0;i<l/2;i++)
    {
        ch= str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    cout<<str;

    
}