#include <iostream>
using namespace std;
int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    /* cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl; */
    meal m1;
    m1 = breakfast;
    cout << m1 << endl;
    cout << (m1 == 0) << endl; //check true flase
}