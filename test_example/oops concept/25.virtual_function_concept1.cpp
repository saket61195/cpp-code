#include <iostream>
using namespace std;
class A
{
public:
    void f1() { cout << "parent wala f1 call" << endl; }
    virtual void f2() { cout << "parent wala f2 call" << endl; }
    virtual void f3() { cout << "parent wala f3 call" << endl; }
    virtual void f4() { cout << "parent wala f4 call" << endl; }
    virtual void f5(int x) { cout << "parent wala f5 call" << endl; }
};
class B : public A
{
public:
    void f1() { cout << "child wala f1 call" << endl; }
    void f2() { cout << "child wala f2 call" << endl; }
    void f4(int x) { cout << "child wala f4 call" <<endl; }
    void f5(int x) { cout << "child wala f5 call" <<endl; }
   
};

int main()
{
    A *p ,o1;
    B o2;
    p=&o2;
    p->f1();
    p->f2();
    p->f3();
    p->f4();
    // p->f4(5);
    p->f5(5);
}