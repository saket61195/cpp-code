#include<iostream>
using namespace std;
class A
{
         int a;
         public:

        //   A & setData(int a)
        void setData(int a)
         {
             this->a=a;
            //  return *this;
         }
         void getData()
         {
             cout<<"the value of a is "<<a<<endl;
         }
};
int main()
{
    A a;
    a.setData(4);
    // a.setData(4).getData();
    a.getData();
}