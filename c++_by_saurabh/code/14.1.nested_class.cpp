#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    // public:
    int rollno;
    char name[20];
    class Address
    {
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        int pincode;

    public:
        void setAddress(int h, char const *s, char const *c, char const *st, int p)
        {
            houseno = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            pincode = p;
        }
        void showAddress()
        {
            cout << "\n"
                 << houseno << endl;
            cout << street << endl;
            cout << state << endl;
            cout << pincode << endl;
        }
    };
    Address add;

public:
    void setRollno(int r)
    {
        rollno = r;
    }
    void setNamme(char const *n)
    {
        strcpy(name, n);
    }
    void setAddress(int h, char const *s, char const *c, char const *st, int p)
    {
        add.setAddress(h, s, c, st, p);
    }
    void showStudent()
    {
        cout << "student data are" << endl;
        cout << rollno << endl;
        cout << name;
        add.showAddress();
    }
};
int main()
{
    //student::Address a1;// if addresss class public
    student s1;
    s1.setRollno(11);
    s1.setNamme("saket");
    s1.setAddress(301, "chhitma", "patna", "bihar", 800001);
    s1.showStudent();
}