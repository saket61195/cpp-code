#include<iostream>
using namespace std;

void func(int a)
{
    cout<<"this is function "<<a<<endl;
}
template<class T>
void func(T a)
{
    cout<<"this is template function "<<a<<endl;
}
template<class T>
class aspire
{
    public:
    T data;
    aspire(T a)
    {
        data = a;
    }
    void display();
};

template<class T>
void aspire<T> ::display()
{
    cout<<data<<endl;
}

int main()
{
    aspire<int> as(9.7);
    as.display();
    func(4);
    func<string>("saket");
}