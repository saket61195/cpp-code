#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void setData(int data)
    {
        val1 = data;
    }
    void showData()
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void setData(int data)
    {
        val2 = data;
    }
    void showData()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.setData(33);
    oc2.setData(64);
    exchange(oc1, oc2);
    cout << "after sawap c1 is " << endl;
    oc1.showData();
    cout << "after sawap c2 is " << endl;
    oc2.showData();
}