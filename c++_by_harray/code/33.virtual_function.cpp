#include<iostream>
using namespace std;
class BaseClass
{
    public:
    int var_base;
virtual  void display()
    {
        cout<<"displaying Base class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int var_dervied=22;
    void display()
    {
        cout<<"Displaying Base class variable var_base "<<var_base<<endl;
        cout<<"Displaying Derived class variable var_derived "<<var_dervied<<endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    // BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer= &obj_derived;
    // base_class_pointer= &obj_base;
    base_class_pointer->var_base=33;
    base_class_pointer->display();
}