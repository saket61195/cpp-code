#include <iostream>
#include <algorithm>
#include <cmath>
using std::cin;
using std::cout;
using namespace std;
int main()
{
    int a = 10, b = 10;
    const int &ref = max(b, a);      //if a and b both are same then first argument value considered
    const int &min = std::min(b, a); //if a and b both are same then first argument value considered
    a = 11;                          //a = a+1;//becuse new defination of a is 11 then new value in a is 11
    b = 9;
    cout << ref << " " << min;
}
