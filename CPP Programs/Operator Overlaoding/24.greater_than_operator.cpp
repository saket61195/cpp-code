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
    int operator >(Time t)
    {
        if(hr>t.hr)
        return 1;
        else if(hr<t.hr)
        return 0;
        else if(min>t.min)
        return 1;
        else if(min<t.min)
        return 0;
        else if(sec>t.sec)
        return 1;
        else
        return 0;
    }

};
int main()
{
    Time t1,t2;
    t1.set_time(4,100,80);
    t2.set_time(4,100,100);
    t1.show_time();
    t2.show_time();
    cout<<"\ngreater time is ";
    if(t1>t2)
    {
        t1.show_time();
    }
    else
    {
        t2.show_time();
    }
}