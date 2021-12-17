#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[40],str2[40];
    int val;
    cout<<"enter string 1 ";
    cin>>str1;
    cout<<"enter string 2 ";
    cin>>str2;
    val=strcmp(str1,str2);
    if(val==0)
    {
        cout<<"string same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
}
