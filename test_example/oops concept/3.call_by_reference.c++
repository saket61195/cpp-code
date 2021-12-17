#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp;
    temp= x;
    x=y;
    y=temp;

}
int main()
{
    int a,b;
    cout<<"enter two number ";
    cin>>a>>b;
    swap(a,b);
    cout<<"after sawping "<<a<<" "<<b;
}





/* #include<iostream>
using namespace std;

int sum(int x,int y)
{
    return (x+y);
}
int main()
{
    int a,b;
    cout<<"enter two number ";
    cin>>a>>b;
    int c = sum(a,b);
    cout<<"sum is "<<c;
} */