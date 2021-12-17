#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp= *x;
    *x=*y;
    *y=temp;

}
int main()
{
    int a,b;
    cout<<"enter two number ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"after sawping "<<a<<" "<<b;
}