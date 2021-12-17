/* #include<iostream>
using namespace std;
int main()
{
    int a,b,l;
    cout<<"enter two number ";
    cin>>a>>b;
    for(l=1;l<a*b;l++)
    {
        if(l%a==0 &&l%b==0)
        break;
    }
    cout<<"lcm of two number is "<<l;
    return 0;
}
 */


/* #include<iostream>
using namespace std;
int main()
{
    int a,b,l;
    cout<<"enter two number ";
    cin>>a>>b;
    for(l=a>b?a:b;l<a*b;l=l+(a>b?a:b))
    {
        if(l%a==0 &&l%b==0)
        break;
    }
    cout<<"lcm of two number is "<<l;
    return 0;
} */

#include<iostream>
using namespace std;

int lcm(int a,int b)
{
    int l;
    for(l=a>b?a:b;l<a*b;l=l+(a>b?a:b))
    {
        if(l%a==0 &&l%b==0)
        break;
    }
    return l;
}
int main()
{
    int x,y;
    cout<<"enter two number ";
    cin>>x>>y;
    cout<<"lcm of two number is "<<lcm(x,y);
    return 0;
}
