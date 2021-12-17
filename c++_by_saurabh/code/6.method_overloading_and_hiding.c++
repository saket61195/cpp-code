#include <iostream>
using namespace std;
class car
{
public:
    void shift_gare()
    {
        cout << "car class shift gare\n";
    }
    void fun()
    {
        cout << "car class function\n";
    }
};
class sportcar : public car
{
public:
    void shift_gare() //method overridding
    {
        cout << "sports car shift gare\n";
    }
    void fun(int x) //method hiding
    {
        cout << "method hiding";
    }
};
int main()
{
    sportcar sc;
    sc.shift_gare(); //spartcar;
    sc.fun(4);       //sportcar
    //sc.fun();//error
}
