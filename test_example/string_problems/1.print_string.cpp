#include<iostream>
#include<string>
using namespace std;
int main()
{
    //char str[10];
    string str;
    cout<<"enter the string ";
    //cin>>str;
    getline(cin,str);
    cout<<"\nEnter string is \n"<<str;
}