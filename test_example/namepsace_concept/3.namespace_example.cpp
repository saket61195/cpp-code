#include <iostream>
#include"mypsace.h"
using namespace std;
using namespace Myspace;

void f1()
{
    cout << "in f1" << endl;
    cout << a << endl;
}
int main()
{
    a = 5;
    Hello obj1;
    obj1.hello();
}