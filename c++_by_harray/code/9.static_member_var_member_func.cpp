#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count; //static varibale declare
public:
    void setData()
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void showData()
    {
        cout << "the id of employee is " << id << " and employee number is " << count << endl;
    }

    static void getCout()
    {
        cout << "the value of count is " << count << endl;
    }
};

int employee::count; // by default static variable are initialized by zero
//int employee::count=100;//if we want to set variable start with 100 like this

int main()
{
    employee sp, jp, kp;
    sp.setData();
    sp.showData();
    employee::getCout();

    jp.setData();
    jp.showData();
    employee::getCout();

    kp.setData();
    kp.showData();
    employee::getCout();
}