#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    void show_data()
    {
        cout << "a=" << a << "b=" << b;
    }
    operator int()//casting operator
    {
        // return (a);
        return (a+b);//if want to sum
    }
};
int main()
{
    complex c1;
    c1.set_data(3, 4);
    c1.show_data();
    int x;
    x = c1;
    cout << "\nx=" << x;
}