#include<iostream>
using namespace std;
class complex 
{
    int a,b;
    public:
    complex(int x,int y) //parametise constructor
    {
        a=x; b=y;
    }
    complex(int k) // paramatise comstructor
    {
        a=k;
    }
    complex() //default constructor
    {
        a=0;b=0;
    }
    complex(complex &c)//copy consttructor // reference variable compalsory in copy constructor
    {
        a=c.a;
        b=c.b;
    }
};
int main()
{
    complex c1(3,4),c2,c3(4);
    complex c4(c1);//copy constructor will call because c4 & c1 both is complex type
}