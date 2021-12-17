#include <iostream>
using namespace std;
class item
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "\na=" << a << " b=" << b;
    }
};
class product
{
private:
    int m, n;

public:
    void setData(int x, int y)
    {
        m = x;
        n = y;
    }
    operator item()//casting operator
    {
        item temp;
        temp.setData(m, n);
        return (temp);
    }
};
int main()
{
    item i1;
    product p1;
    p1.setData(3, 4);
    i1 = p1;
    i1.showData();
}