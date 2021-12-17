#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=1;
    cout<<"enter the number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"fact of "<<n<<" is "<< fact;
}
