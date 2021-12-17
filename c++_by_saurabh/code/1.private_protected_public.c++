#include <iostream>
class A
{
private:
    int a;

protected:
    void set_value(int k)
    {
        a = k;
    }
};
class B : private A
{
public:
    void set_data(int x)
    {
        set_value(x); //if private cannot acess else in public and protected it can be accessible
    }
};
int main()
{
    B obj1;
    obj1.set_data(4); // only accesseble for protected
    obj1.set_data(4); // if public
    //obj1.set_value(4);//if public ANd  protected
}
