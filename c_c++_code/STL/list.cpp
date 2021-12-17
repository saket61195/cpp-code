#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> set1;

    // * insert element into set
    int x;
    int size;
    cout << "enter the size of set ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element int set ";
        cin >> x;
        set1.insert(x);
    }

    // * printing set element
    set<int>::iterator it1, it2, it3;
    for (it1 = set1.begin(); it1 != set1.end(); it1++)
    {
        cout << *it1 << " ";
    }
    int y;
    cout << "\ninset element into set ";
    cin >> y;
    set1.insert(y);
    cout << "\nsize of set is after inserting " << set1.size()<<endl;

    for (it1 = set1.begin(); it1 != set1.end(); it1++)
    {
        cout << *it1 << " ";
    }
    cout << endl;
    // * making another set  s2 , storing elements in decreasing order.
    // * copying the elements of s into s2 .

    // * set<int, greater<int>> s2(set1.begin(), set1.end()); 

    // * making another set  s2 , storing elements in incresing order.
    // * copying the elements of s into s2 .
    set<int> s2(set1.begin(), set1.end());
    for (it1 = s2.begin(); it1 != s2.end(); it1++)
    {
        cout << *it1 << " ";
    }
    int xx1,xx2;
    cout<<"\nenter the element you want to remove ";
    cin>>xx1>>xx2;

    it2=s2.find(xx1);
    it3=s2.find(xx2);
    s2.erase(it2,it3);
    cout<<"\nafter removing element \n";
    
    for (it1 = s2.begin(); it1 != s2.end(); it1++)
    {
        cout << *it1 << " ";
    }

}