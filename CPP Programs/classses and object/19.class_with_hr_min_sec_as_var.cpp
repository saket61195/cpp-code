#include<iostream>
using namespace std;

class Time
{
    int hr,min,sec;
    public:
    void set_time(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void show_time()
    {
        cout<<"\n"<<hr<<":"<<min<<":"<<sec;  
    }
    void nornalize()
    {
        min=min+sec/60;
        sec=sec%60;
        hr=hr+min/60;
        min=min%60;
    }
};
int main()
{
    Time t1;
    t1.set_time(4,100,100);
    t1.show_time();
    t1.nornalize();
    t1.show_time();
}