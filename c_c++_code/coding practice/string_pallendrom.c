#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,l,flag=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=flag+1;
            break;
        }
    }
    if(flag==0)
    {
        printf("YES THIS IS PALLINDROM");
        
    }
    else
    {
        printf("NO THIS IS NOT PALLINDROM ");
    }
}