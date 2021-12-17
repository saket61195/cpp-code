#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll_no;
    public:
    void set_number(int a)
    {
        roll_no=a;
    }
    void print_number()
    {
        cout<<"your roll number is "<<roll_no<<endl;
    }
};
class Test : virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout<<"your result is here "<<endl
            <<"maths "<<maths<<endl
            <<"physics "<<physics<<endl;
    }
};
class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void set_score(float f1)
    {
        score = f1;
    }
    void print_score()
    {
        cout<<"your PT score is "<<score<<endl;
    }
};

class Result : public Test,public Sports
{
    private:
    float total;
    public:
    void display()
    {
        total = maths + physics + score ;
        print_number();
        print_score();
        print_marks();
        cout<<"your total score is "<<total<<endl;
    }
};
int main()
{
    Result r1;
    r1.set_number(10);
    r1.set_marks(55.3,55.4);
    r1.set_score(9);
    r1.display();
}