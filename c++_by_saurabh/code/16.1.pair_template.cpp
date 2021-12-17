#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void set_student(string s, int a)
    {
        name = s;
        age = a;
    }
    void show_student()
    {
        cout << "student name =" << name << " ";
        cout << ",student age =" << age;
    }
};
int main()
{
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;
    pair<string, student> p4;
    p1 = make_pair("saket", 100);
    p2 = make_pair("sp", "gp");
    p3 = make_pair("dd", 88.5);
    student s1;
    s1.set_student("prabhakar", 44);
    p4 = make_pair(1, s1);
    cout << "\n pair 1 " << p1.first << " " << p1.second << endl;
    cout << "\n pair 2 " << p2.first << " " << p2.second << endl;
    cout << "\n pair 3 " << p3.first << " " << p3.second << endl;
    cout << "\n pair 4 " << p4.first << " ";
    s1 = p4.second;
    s1.show_student();
}