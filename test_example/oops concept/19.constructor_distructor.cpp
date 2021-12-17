/* #include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {cout<<"\na called";}
};
class B:public A
{
    int b;
    public:
    // B():A()// it is written by compiler
    B()
    {cout<<"\nb called";}

};
int main()
{
    B obj;

}
 */

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    ~A()
    {
        cout << "\na called";
    }
};
class B : public A
{
    int b;

public:
    ~B()
    {
        cout << "\nb called";
    }
};
int main()
{
    B obj;
}