#include <iostream>
using namespace std;
class base
{
public:
    virtual ~base() = 0;
};
base::~base()
{
    //sometging
}

class derived : public base
{
public:
    ~derived()
    {
        std::cout << "derived class destructor";
    }
};

int main()
{
    base *pbase = new derived;
    delete pbase; //base()::~base();
    return 0;
}