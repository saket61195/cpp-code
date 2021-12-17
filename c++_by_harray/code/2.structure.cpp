#include <iostream>
#include <string>
using namespace std;
/* struct employee
{
    int emp_id;
    string name;
    float salary;
};
int main()
{
    struct employee sara;
    sara.emp_id = 1;
    sara.name = "saket";
    sara.salary = 15500000;
    cout << "the value of employee id is " << sara.emp_id << endl;
    cout << "the value of employee name is " << sara.name << endl;
    cout << "the value of employee salary is " << sara.salary << endl;
} */
typedef struct employee
{
    int emp_id;
    string dep;
    float salary;
} ep;
int main()
{
    ep sara;
    sara.emp_id = 1;
    sara.dep = "computer";
    sara.salary = 15500000;
    cout << "the value of employee id is " << sara.emp_id << endl;
    cout << "the value of employee depRTMENT is " << sara.dep << endl;
    cout << "the value of employee salary is " << sara.salary << endl;
}