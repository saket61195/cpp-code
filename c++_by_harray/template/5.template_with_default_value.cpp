#include<iostream>
using namespace std;

template <class t1=int, class t2=float,class t3=char>
class Saketji
{
    t1 a;
    t2 b;
    t3 c;
    public:
    Saketji(t1 x,t2 y,t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};

int main()
{
    Saketji <> s1(2,7.9,'c');
    s1.display();
    cout<<endl;

    Saketji <string,int,float> s2("computer",15,666.0555);
    s2.display();

}
