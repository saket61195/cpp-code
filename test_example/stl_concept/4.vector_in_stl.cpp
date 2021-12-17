#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout << "current capacity " << v1.capacity() << endl;
    v1.push_back(11);
    cout << "current capacity " << v1.capacity() << endl;
    vector<char> v2(5);
    vector<int> v3(5, 10);
    vector<string> v4(3, "hello");
    cout << v4[0] << endl;
    cout << v4[1] << endl;
    cout << v4[2] << endl;

    vector<int> v5{10, 20, 30, 40};
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    cout << v5.size() << endl;
    cout << v5.capacity() << endl;
    v5.push_back(50);
    cout << v5.size() << endl;     //number of element
    cout << v5.capacity() << endl; //size of vector
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;
    v5.pop_back();
    cout << v5.size() << endl;
    cout << v5.capacity() << endl; //size of vector

    vector<int> v6;
    for(int i=0;i<=9;i++)
    {
        v6.push_back(10*i+1);
        cout << v6.capacity() << " ";
    }
    cout<<endl;
    v6.clear();//remove all data
    cout<<"size is "<<v6.size()<<endl;
    cout<<"capacity is "<<v6.capacity()<<endl;

    cout<<v5.front()<<endl;
    cout<<v5.back()<<endl;
    vector<int>::iterator itr=v5.begin();
    // vector<int>::iterator itr=v5.end();
    // v5.insert(itr-1,7777);//end
    v5.insert(itr+2,7777);//begin
     for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }

}