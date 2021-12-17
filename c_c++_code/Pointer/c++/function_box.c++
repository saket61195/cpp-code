#include <iostream>
using namespace std;
class Box
{
private:
    int l, b, h; //instance member variable

public:
    // void setDimension(int x, int y, int z)
    // {
    //     l = x;
    //     b = y;
    //     h = z;
    // }

    void setDimension(int l, int b, int h)
    {
        this->l = l; // note "this->l"  to access instance member variable  // use of this pointer
        this->b = b;
        this->h = h;
    }
    void showDimension()
    {
        cout << "\n l = " << l << " b= " << b << " h= " << h << "\n";
    }
};
int main()
{
    Box b1, *p;
    p = &b1;
    p->setDimension(40, 50, 60);
    p->showDimension();
    b1.setDimension(10, 20, 30);
    b1.showDimension();
}
