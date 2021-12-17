#include<iostream>
using namespace std;
int main()
{
    int j=0, i=0;
    string rev;
    string s1="my name is khan";
    int len=s1.length();
   for(i=0;i<=len;i++)
   {
       if((s1[i]==' ') || s1[i]=='\0')
       {
           for(j=len-1;j>=0;j--)
           {
               rev=rev+s1[j];
           }
       }
   }
}