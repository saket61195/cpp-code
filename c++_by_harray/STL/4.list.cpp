#include <iostream>
#include <list>
using namespace std;

void display(list<int> &li)
{
    list<int>::iterator itr;
    for (itr = li.begin(); itr != li.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_back(15);
    l1.push_back(11);
    l1.push_back(19);
    l1.push_back(12);

    display(l1);

    list<int> l2(3);
    list<int>::iterator itr2;
    itr2 = l2.begin();
    *itr2 = 55;
    itr2++;
    *itr2 = 66;
    itr2++;
    *itr2 = 77;
    itr2++;
    *itr2 = 22; //it will not print because l2(3) is of 3 size
    itr2++;
    display(l2);
    cout<<endl;
    l1.sort();
    display(l1);
    l2.reverse();
    l1.push_front(99);
    display(l1);
    l1.pop_back();
    display(l1);
    l1.pop_front();
    display(l1);
    l1.push_front(100);
    l1.push_front(100);
    display(l1);
    l1.remove(100);
    display(l1);
    return 0;
}