#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "the real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
};

int main()
{
    complex c1;
    complex *ptr = &c1;
    // (*ptr).setData(1, 54);
    // (*ptr).getData();
    ptr->setData(1,54);
    ptr->getData();


    complex *ptr1 = new complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    (ptr1+1)->setData(2, 6); 
    (ptr1+1)->getData();
    (ptr1+2)->setData(5, 8); 
    (ptr1+2)->getData();
    (ptr1+3)->setData(7, 8); 
    (ptr1+3)->getData();
}