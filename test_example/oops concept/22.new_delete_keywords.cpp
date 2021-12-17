#include<iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p=13;
    cout<<*p<<endl;
    int *ptr=new int(10);
    cout<<*ptr<<endl;
    int *ptr1=new int(11);
    delete ptr1;
    cout<<*ptr1<<endl;
    int *p1=new int[3];
    p1[0]=4;
    p1[1]=5;
    p1[2]=6;
    for(int i=0;i<3;i++)
    {
        cout<<p1[i]<<" ";
    }
    cout<<endl;
}