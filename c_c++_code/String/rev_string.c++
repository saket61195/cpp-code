#include<iostream>
#include<string.h>
using namespace std;
string name="my name is khan";
int main()
{
    int i;
    string rev;
    string s1="my name is khan";
     int len=s1.length();
     cout<<"length of string is "<<len<<"\n";
     for(i=len-1;i>=0;i--)
     {
         rev=rev+s1[i];

     }
     cout<<rev<<"\n";


}