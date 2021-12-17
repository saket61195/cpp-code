#include <iostream>
#include <string.h>
using namespace std;
class Person
{
    char name[20];
    int age;

protected:
    void setName(char const *n)
    {
        strcpy(name, n);
    }
    void setAge(int a)
    {
        age = a;
    }

public:
    char * getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

class Employee:public Person
{
    float salary;
    protected:
    void setSalary(float a)
    {
        salary=a;
    }
    float getSalary()
    {
        return salary;
    }
    public:
    void setEmployee(char const *n,int a,float s)
    {
        setName(n);
        setAge(a);
        setSalary(s);
    }
    void showEmployee()
    {
        cout<<"\n"<<"name = "<<getName()<<"\n"<<"age = "<<getAge()<<"\n"<<"salary = "<<getSalary();
    }
};
int main()
{
    Employee emp;
    emp.setEmployee("saket",24,10000000.00);
    emp.showEmployee();
}