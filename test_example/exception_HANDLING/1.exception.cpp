#include<iostream>
using namespace std;
int main()
{
    cout<<"welcome";
    try
    {
        throw 10;
        cout<<"\n in Try block";
    }
    catch(int e)
    {
        cout<<"\nException is :"<<e<<endl;
    }
    cout<<"\nlast line";
}