#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    // string s1;
    // s1="hello";
    // string s2;
    // s2=" student";
    // s2=s1+s2;
    // cout<<s2<<endl;
    // string s3=s2;
    // cout<<s3<<endl;
    string s4;
    // cout<<"enter your name";
    // cin>>s4;
    // cout<<"hello "<<s4;
    char str[]="computer";
    string s5="this is my ";
    string s6;
    s6=s5+str+"123"+'a';//atleast one string type
    cout<<s6<<endl;
    s6.insert(2,"ttttt");
    cout<<s6<<endl;
    // s5.replace(2,2,"a");
    s5.replace(2,5,"a");
    cout<<s5<<endl;

    string s8="hellote";
    char c2[10];
    strcpy(c2,s8.c_str());//convert to c style string
    int size=s8.size();
    cout<<c2<<endl<<size<<endl;


}