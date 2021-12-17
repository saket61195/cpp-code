#include <iostream>
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book);
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
}
void display(book b)
{
    cout << "\n"
         << b.bookid << " " << b.title << " " << b.price;
}
book input()
{
    book b;
    cout << "enter bookid, title price";
    cin >> b.bookid >> b.title >> b.price;
    return b;
}
