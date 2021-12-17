#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; //!Declaration of vector

    //!Initializing vector ‘a’
    for (int i = 0; i < 7; i++)
    {
        a.push_back(i);
    }
    // vector<int>::iterator itr;
    // for(itr=a.begin();itr!=a.end();itr++)
    // {
    //     cout<<*itr<<" ";
    // }

    for (auto itr = a.begin(); itr != a.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    vector<int> b;
    int size, element;
    cout << "ener the size of vecctor ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element in the vector ";
        cin >> element;
        b.push_back(element);
    }

    for (auto it1 = b.begin(); it1 != b.end(); it1++)
    {
        cout << *it1 << " " ;
    }
    cout<<endl;
    for (auto it2 = b.rbegin(); it2 != b.rend(); it2++)
    {
        cout << *it2 << " " ;
    }
}
