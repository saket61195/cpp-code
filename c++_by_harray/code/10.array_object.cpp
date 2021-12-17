#include<iostream>
using namespace std;
class employee
{
    int id;
    int salary;
    public:

    void setId()
    {
        salary=122;
        cout<<"enter employee id "<<endl;
        cin>>id;
    }
    void getId()
    {
        cout<<"the id of this employee is "<<id<<endl;
    }
};
int main()
{
    // employee sp,jp,gp;
    // sp.setId();
    // sp.getId();

    // jp.setId();
    // jp.getId();

    // gp.setId();
    // gp.getId();

    //using array object 
    employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

}