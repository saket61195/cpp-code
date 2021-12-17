#include<iostream>
namespace Myspace

{
    int a;
    void f1();
    class Hello
    {
    public:
        void hello()
        {
            std::cout << "hello" << std::endl;
            std::cout << "a=" << a <<std:: endl;
        }
    };
}