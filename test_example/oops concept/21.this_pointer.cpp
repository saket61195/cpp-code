#include <iostream>
using namespace std;
class box
{
private:
    int l, b, h;

public:
    void set_dimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    void show_dimension()
    {
        cout << "l=" << l << " b=" << b << " h=" << h << endl;
    }
};
int main()
{
    box smallbox, *p; //object pointer
    p = &smallbox;
    // smallbox.set_dimension(10,8,4);
    // smallbox.show_dimension();
    p->set_dimension(10, 8, 4);
    p->show_dimension();
}
