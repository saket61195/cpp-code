#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++) //v.size() will give size of vector 

        cout << v[i] << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "enter the size of vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element ";
        cin >> element;
        vec1.push_back(element); //insert element at end
    }

    display(vec1);
}