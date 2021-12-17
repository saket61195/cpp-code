#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex()
    {
    }
    complex(int k)
    {
        a = k;
        b = 0;
    }
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "a=" << a << "b=" << b;
    }
};
int main()
{
    complex c1;
    int x = 5;
    c1 = 5; // for understanding in complex(5) will go
    c1.show_data();
}
