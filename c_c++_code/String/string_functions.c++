#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s1[10]="hello";
    char s2[10]="world";
    char s3[10];
    int len;
    strcpy(s3,s2);
    cout<<s3<<"\n";
    strcat(s1,s2);
    cout<<s1<<"\n";
    len=strlen(s1);
    cout<<len<<"\n";
}