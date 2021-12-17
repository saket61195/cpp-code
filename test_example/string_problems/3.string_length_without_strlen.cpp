#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    int count=0;
    cout<<"entr the string ";
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"length of string is "<<count<<endl;
    //cout<<strlen(str);
    
}