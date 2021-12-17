#include<iostream>
using namespace std;
class car
{
    private:
    int a;
    public:
    void shift_gare()
    {
        cout<<"normal  gare\n";
    }
    void shift_gare(int x)
    {
        a=x;
        cout<<"modified gare "<<a;
    }
};
int main()
{
    car c;
    c.shift_gare();
    c.shift_gare(2);
}
