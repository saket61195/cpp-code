#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    //! filling vector ‘a’ with 7 in repetition of 4 times
    a.assign(4, 7);
    /* for(int x : a)
    {
        cout<<x<<" ";
    } */
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    //! inserting 10 to the last position of vector ‘a’
    a.push_back(10);
    int n = a.size();
    cout << "\nlast element is " << a[n - 1] << endl;

    //! removing the last element from vector ‘a’
    a.pop_back();

    //! printing the vector ‘a’ contents
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    //! inserting 3 at the beginning of vector ‘a’
    a.insert(a.begin(), 3);

    //!Printing the first element of vector ‘a’

    cout << "\nthe first element is " << a[0] << endl;

    //! removing the first element
    a.erase(a.begin());

    //! Printing the new first element of vector ‘a’
    cout << "\nthe first element is " << a[0] << endl;

    //! erasing the vector
    a.clear();

    //! printing the vector ‘a’ after erasing it
    cout << "\nVector size after erase(): " << a.size() << endl;

    //! Creating two vectors ‘a1’ and ‘a2’ of integer type
    vector<int> a1, a2;

    //! Pushing values in vector ‘a1’ and ‘a2’
    a1.push_back(2);
    a1.push_back(4);
    a2.push_back(3);
    a2.push_back(6);

    //! printing vector ‘a1’
    cout << "\n\nvector a1 is ";
    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1[i] << " ";
    }

    //! printing vector ‘a2’
    cout << "\n\nvector a2 is ";
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2[i] << " ";
    }
    //! Swaping vectors ‘a1’ and ‘a2’
    a1.swap(a2);
    cout << "\nAfter Swap \nVector 1 is: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";

    //!printing vector ‘a2’ after swapping with ‘a1’

    cout << "\nVector 2 is: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";
    return 0;
}