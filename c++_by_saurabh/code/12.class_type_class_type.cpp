#include <iostream>
using namespace std;
class product
{
private:
    int m, n;

public:
    void set_data(int x, int y)
    {
        m = x;
        n = y;
    }
    int getM()
    {
        return n;
    }
    int getN()
    {
        return n;
    }
};
class item
{
private:
    int a, b;

public:
    void show_data()
    {
        cout << "a=" << a << "b=" << b;
    }
    item() {}
    item(product p)
    {
        a = p.getM();
        b = p.getN();
    }
};
int main()
{
    item i1;
    product p1;
    p1.set_data(3, 5);
    i1 = p1;
    i1.show_data();
}
