// #include<iostream>
// using namespace std;
#include<stdio.h>

int fun(int);
int main()
{
    int k;
    k=fun(3);
    // cout<<k<<" ";
    printf("sum of natural number is:%d ",k);

}
int fun(int a)
{
    int s;
    if(a==1)
    return a;
    s=a+fun(a-1);
    return s;
    
}
