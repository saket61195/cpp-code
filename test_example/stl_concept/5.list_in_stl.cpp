#include<iostream>
#include<list>
using namespace std;
int main()
{
    list <int>l1{100,300,500,600,100,100};
    list<string>l2{"mp","jk","mn","sd"};
    l1.push_back(700);
    l1.push_front(800);
    // l1.remove(100);//it will remove duplocate
    list<int>::iterator p= l1.begin();
    while(p!=l1.end())
    {
        cout<<*p<<" ";
        p++;
    }
    cout<<endl;
    l1.sort();
    // l1.pop_front();
    l1.pop_back();
    l1.reverse();
list<int>::iterator p1= l1.begin();
    while(p1!=l1.end())
    {
        cout<<*p1<<" ";
        p1++;
    }
    cout<<endl;

}
