#include<iostream>
using namespace std;
class A
{
    private:
    void f1()
    {
        cout<<"f1";
    }
    protected:
    void f2()
    {
        cout<<"f2";
    }
    public:
    void f3()
    {
        cout<<"f3";
    }
};
class B:private A
{
    private:
    void f4()
    {
        cout<<"f4";
    }
    protected:
    void f5()
    {
        cout<<"f5";
    }
    public:
    void f6()
    {
        cout<<"f6";
    }
};
int main()
{
    B obj;
    //obj.f3(); not assisable due to class B:private A ,private  A means all his method and variable are private
    obj.f6();
}