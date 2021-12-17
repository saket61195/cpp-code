#include <iostream>
#include <tuple>
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
        cout << ",student age =" << age<<endl;
    }
};
int main()
{
    tuple<string, int, int> t1;
    tuple<int,int,student>t2;
    t1 = make_tuple("india", 22, 11);
    cout << get<0>(t1) << " ";
    cout << get<1>(t1) << " ";
    cout << get<2>(t1) << " ";
    student s1,s2;
    s1.set_student("saket",30);
    t2=make_tuple(1,2,s1);
    s1.show_student();
    cout<<get<0>(t2) << " ";;
    cout<<get<1>(t2) << " ";;


}
