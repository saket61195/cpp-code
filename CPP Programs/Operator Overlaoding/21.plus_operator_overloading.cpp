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
        hr=hr+min/60;
        min=min+sec/60;
        min=min%60;
        sec=sec%60;
        
        cout<<"\n"<<hr<<":"<<min<<":"<<sec;
    }
    Time operator +(Time t1)
    {
        Time temp;
        temp.hr=hr+t1.hr;
        temp.min=min+t1.min;
        temp.sec=sec+t1.sec;
        return temp;
        
    }
};
int main()
{
    Time t1,t2,t3;
    t1.set_time(3,55,44);
    t2.set_time(5,22,11);
    t1.show_time();
    t2.show_time();
    // t3=t1+t2;
    t3=t1.operator+(t2);
    t3.show_time();


}