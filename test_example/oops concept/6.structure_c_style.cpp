#include<iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;
};
book input()
{
    book b;
    cout<<"enter the details of bookid , title, price , "<<endl;
    cin>>b.bookid>>b.title>>b.price;
    return b;
}
void display(book b)
{
    cout<<b.bookid<<" "<<b.title<<" "<<b.price<<endl;
}

int main()
{
    book b1={101,"c++ tutorial,50.5"};
    display(b1);
    //user input
    book b2;
    b2 = input();
    display(b2);
}