#include <iostream>
using namespace std;
int main()
{
    int p, r, t, si = 0;
    cout << "enter the amout of principal ";
    cin >> p;
    cout << "enter the rate of interest ";
    cin >> r;
    cout << "enter the total time ";
    cin >> t;
    si = (p * r * t) / 100;
    cout << "simple intrest is " << si;
    return 0;
}