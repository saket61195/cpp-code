#include<iostream>
using namespace std;
class box
{
    private:
    int l,b,h;
    public:
    void set_dimension(int x,int y,int z)
    {
        l=x; b=y; h=z;
    }
    void show_data()
    {
        cout<<"l="<<l<<"b="<<b<<"h="<<h;
    }
};
int main()
{
    box *p,smallbox;
    p=&smallbox;
    p->set_dimension(10,2,4);
    p->show_data();
}