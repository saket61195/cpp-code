#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};
void Student::set_roll_number(int r)
{
    roll_number = r;
}
void Student::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "the marks obtained in math are " << maths << endl;
    cout << "the marks obtained in physics are " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        percentage = (maths + physics) / 2;
        cout << "your result is " << percentage << "%" << endl;
    }
};
int main()
{
    Result r1;
    r1.set_roll_number(11);
    r1.set_marks(16.3, 88.4);
    r1.display_result();
}