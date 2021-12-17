#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1{10, 20, 40,33,11,44};
    list<int>::iterator p = l1.begin();
    while (p != l1.end())
    {
        cout << *p << " ";
        p++;
    }
    list<string> l2{"delhi", "mumbai", "patna", "chennai"};
    list<string>::iterator i = l2.begin();
    while (i != l2.end())
    {
        cout << "\n"
             << *i;
        i++;
    }

    cout << "\ntotal number of element in the list l1 is : " << l1.size() << endl;
    cout << "\ntotal number of element in the list l2 is : " << l2.size() << endl;

    l1.push_front(4);
    l1.push_back(55);
    list<int>::iterator p1 = l1.begin();
    while (p1 != l1.end())
    {
        cout << *p1 << " ";
        p1++;
    }

    l2.push_front("kolkata");
    l2.push_back("jharkhand");
    list<string>::iterator p2 = l2.begin();
    while (p2 != l2.end())
    {
        cout << "\n"
             << *p2;
        p2++;
    }

    cout << "\ntotal number of element in the list l1 is : " << l1.size() << endl;
    cout << "\ntotal number of element in the list l2 is : " << l2.size() << endl;

    l1.pop_front();
    l1.pop_back();
    list<int>::iterator p3 = l1.begin();
    while (p3 != l1.end())
    {
        cout << *p3 << " ";
        p3++;
    }

    l2.pop_front();
    l2.pop_back();
    list<string>::iterator p4 = l2.begin();
    while (p4 != l2.end())
    {
        cout << "\n"
             << *p4;
        p4++;
    }

    cout << "\ntotal number of element in the list l1 is : " << l1.size() << endl;
    cout << "\ntotal number of element in the list l2 is : " << l2.size() << endl;
    l1.sort();
    l1.reverse();
    l1.remove(10);
    l1.clear();
     list<int>::iterator p6 = l1.begin();
     while (p6 != l1.end())
    {
        cout << *p6 << " ";
        p6++;
    }
    l2.sort();
    list<string>::iterator i1 = l2.begin();
    while (i1 != l2.end())
    {
        cout << "\n"
             << *i1;
        i1++;
    }

}