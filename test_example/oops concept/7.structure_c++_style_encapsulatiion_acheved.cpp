#include <iostream>
using namespace std;
// encapsulation gruoping of variable and function into one place
struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    void input()
    {
        cout << "enter the details of bookid , title, price , " << endl;
        cin >> bookid >> title >> price;
    }
    void display()
    {
        cout << bookid << " " << title << " " << price << endl;
    }
};

int main()
{
    // book b1 = {101, "c++ tutorial,50.5"}; // if remove private
    // b1.display();
    //user input
    book b2;
    b2.input();
    b2.display();
}