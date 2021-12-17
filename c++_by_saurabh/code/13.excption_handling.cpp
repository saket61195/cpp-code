#include <iostream>
using namespace std;

/* int main()
{
    cout<<"welcome";
    try
    {
        throw 10;
        cout<<"\nI am in try block";
    }
    catch(double e)
    {
        cout<<"\nexception no :"<<e;
    }
    catch(int e)
    {
        cout<<"\nexception no :"<<e;
    }
    cout<<"\nlast line";

} */

//!

/* int main()
{
    int i=3;
    cout<<"welcome";
    try
    {
        if(i==1)
        throw 1;
        if(i==2)
        throw 2;
        if(i==3)
        cout<<"\nI am in try block";
    }
    catch(double e)
    {
        cout<<"\nexception no :"<<e;
    }
    catch(int e)
    {
        cout<<"\nexception no :"<<e;
    }
    cout<<"\nlast line";
} */

/* int main()
{
    int i = 3;
    cout << "welcome";
    try
    {
        if (i == 1)
            throw 1;
        if (i == 2)
            throw "hello";
        if (i == 3)
        throw 4.5;
            cout << "\nI am in try block";
    }
    catch (...)
    {
        cout << "\nexception no :";
    }
    cout << "\nlast line";
} */


/* int main()
{
    int i = 3;
    cout << "welcome";
    try
    {
        if (i == 1)
            throw 1;
            cout << "\nI am in try block";
    }
    catch (int)
    {
        cout << "\nexception no :";
    }
    cout << "\nlast line";
} */


void fun()
{
    throw 10;
}

int main()
{
    int i = 3;
    cout << "welcome";
    try
    {
        if (i == 3)
            fun();
            cout << "\nI am in try block";
    }
    catch (int e)
    {
        cout << "\nexception no :"<<e;
    }
    cout << "\nlast line";
}