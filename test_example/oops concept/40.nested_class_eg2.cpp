#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int roll_no;
    char name[20];
    public:
    class address
    {   private:
        int house_no;
        char street[20];
        char city[20];
        char state[20];
        int pin;
        
        public:
        void set_add(int h,char const *s,char const *c,char const *st,int p)
        {
            house_no=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            pin=p;
        }
        void show_add()
        {
            cout<<"house no : "<<house_no<<endl;
            cout<<"street : "<<street<<endl;
            cout<<"city : "<<city<<endl;
            cout<<"state : "<<state<<endl;
            cout<<"pin : "<<pin<<endl;
        }
    };
    address add;
    public:
    void set_roll_no(int r)
    {
        roll_no=r;
    }
    void set_name(char const *n)
    {
        strcpy(name,n);
    }
    // void set_add(int h,char const *s,char const *c,char const *st,int p)
    // {
    //     add.set_add(h,s,c,st,p);
    // }
    void set_add(int h1,char const *s1,char const *c1,char const *st1,int p1)
    {
        add.set_add(h1,s1,c1,st1,p1);
    }
    void show_student()
    {
        cout<<"student details are "<<endl;
        cout<<"roll no : "<<roll_no<<endl;
        cout<<"name : "<<name<<endl;
        add.show_add();
    }
};
int main()
{
    student::address a1;//only when address is public
    a1.set_add(101,"begampur","patna","bihar",800009);
    a1.show_add();
    // student s1;
    // s1.set_name("saket");
    // s1.set_roll_no(123);
    // s1.set_add(101,"begampur","patna","bihar",800009);
    // s1.show_student();
}