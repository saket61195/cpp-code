#include <iostream>
#include <vector>
using namespace std;

template <class T>
void setData(vector<T> &v)
{
    int size;
    T element;
    cout << "enter the size of vector " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the element ";
        cin >> element;
        v.push_back(element); //! insert element at end
    }
}
template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++) //!  v.size() will give size of vector

    {
        //cout << v[i]<<" ";
        cout << v.at(i) << " "; //same as v[i]
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    setData(vec1);
    vec1.pop_back(); // delete/pop from last
    display(vec1);

    //! using iterator in vector
    //     vector<int>::iterator itr = vec1.begin();
    //     vec1.insert(itr, 66); // insert at first
    // vec1.insert(itr+1, 66); //insert on after one bfore second
    //     display(vec1);

    // vector<float> vec2;
    // setData(vec2);
    // display(vec2);

    // vector<char> vec2;
    // setData(vec2);
    // display(vec2);

    // vector<string> vec2;
    // setData(vec2);
    // display(vec2);

    // vector<char> vec2(3);
    // vector<char> vec3(vec2);
    // setData(vec3);
    // display(vec3);

    vector<int> vec4(10, 63);
    display(vec4);
}