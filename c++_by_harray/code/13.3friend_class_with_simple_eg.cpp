#include<iostream>
using namespace std;
class y;
class x
{
    int data;
    public:
    void setData(int value)
    {
        data= value;
    }
    friend void add(x,y);
};

class y
{
    int num;
    public:
    void setData(int value)
    {
        num=value;
    }
    friend void add(x,y);
};


void add(x o1,y o2)
{
    cout<<"sum of x and y object are "<<o1.data+o2.num<<endl;
}
int main()
{
    x o1;
    o1.setData(3);
    y o2;
    o2.setData(4);

    add(o1,o2);
    
}