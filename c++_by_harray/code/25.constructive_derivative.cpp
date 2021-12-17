#include<iostream>
using namespace std;

class Base1
{
    int data1;
    public:
    Base1(int i)
    {
        data1 = i;
        cout<<"Base1 class constructor called "<<endl;
    }
    void printDataBase1()
    {
        cout<<"the value of data1 is "<<data1<<endl;
    }
};

class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2 = i;
        cout<<"Base2 class constructor called "<<endl;
    }
    void printDataBase2()
    {
        cout<<"the value of data2 is "<<data2<<endl;
    }
};

// class Derived : public Base1,public Base2
class Derived : public Base2,public Base1
{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d): Base1(a),Base2(b)
    {
        derived1 = c;
        derived2 = d;
    }
    void printDataDrived()
    {
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;
    }
};
int main()
{
    Derived d1(1,3,4,5);
    d1.printDataBase1();
    d1.printDataBase2();
    d1.printDataDrived();

}