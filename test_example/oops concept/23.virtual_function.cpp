/* #include<iostream>
using namespace std;
class A
{
    public:
    void f1()
    {
        cout<<"parent version call"<<endl;
    }
};
class B : public A
{
    public:
    void f1()
    {
        cout<<"child version call"<<endl;
    }
};
int main()
{
    A obj1,*p;
    B obj2;
    p=&obj2;
    p->f1();//parent verion call because complier see the type of pointer here pointer is type of class A
} */

#include <iostream>
using namespace std;
class A
{
public:
    virtual void f1()
    {
        cout << "parent version call" << endl;
    }
};
class B : public A
{
public:
    void f1()
    {
        cout << "child version call" << endl;
    }
};
int main()
{
    A obj1, *p;
    B obj2;
    p = &obj2;
    p->f1(); //child verion call because of virtual keyword and virtual means late bindig 
}