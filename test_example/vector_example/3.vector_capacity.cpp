#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int element;
    // cout<<"enter the element";
    for (int i = 1; i <= 5; i++)
    {
        // cin >> element;
        // a.push_back(element);
        a.push_back(i*2);
    }
    for (auto itr1 = a.begin(); itr1 != a.end(); itr1++)
    {
        cout << *itr1 << " ";
    }
    cout<<endl;
    cout<<"\nsize "<<a.size();

    cout<<"\ncapacity "<<a.capacity();

    cout<<"\nmax_size "<<a.max_size();

    // resizing  the vector ‘a’ to  size  4 
    a.resize(4);
    cout<<"\nsize "<<a.size();
    cout<<endl; 
    for (auto itr1 = a.begin(); itr1 != a.end(); itr1++)
    {
        cout << *itr1 << " ";
    }


    // checks if the vector is empty or not 
    if (a.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
    cout<<endl;
}