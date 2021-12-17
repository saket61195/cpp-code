#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the three number ";
    cin >> a >> b >> c;
    int avg = 0;
    avg = (a + b + c) / 3;
    cout << "avg of three number is :" << avg;
    return 0;
}