#include<stdio.h>
int main()
{
    int x=5,*p,**q,***r;
    p=&x;
    q=&p;
    r=&q;
    **q=8;
    printf("%d\n",x);
    ***r=10;
    printf("%d\n",x);


}