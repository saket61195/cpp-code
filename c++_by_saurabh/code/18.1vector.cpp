#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<char> v2(4);
    vector<int> v3(5, 10);
    vector<string> v4(3, "hello");
    cout << v4[0] << endl;
    cout << v4[1] << endl;
    cout << v4[2] << endl;
    vector<int> v5{10, 20, 30, 40, 50};
    for (int i = 0; i <= 4; i++)
        cout << "\n"
             << v5[i];
    


    cout<<"\nfirst element "<<v5.front();
    cout<<"\nlast element "<<v5.back();

    cout<<"\nelememt at the index 3 is "<<v5.at(3);
    vector<int> v6;
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    v6.push_back(10);
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    v6.push_back(11);
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    v6.push_back(13);
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    v6.push_back(14);
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    v6.push_back(15);
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    v6.push_back(16);
    cout << "\ncurrent capacity of v6 is " << v6.capacity() << endl;
    vector<int> v7;
    cout << "\ncurrent capacity of v7 is " << v7.capacity() << endl;
    for (int i = 0; i <= 9; i++)
        v7.push_back(10 * (i + 1));
    cout << "\ncurrent capacity of v7 is " << v7.capacity() << endl;
    v7.pop_back();

    for (int i = 0; i <= v7.size(); i++)
        cout << "\n"
             << v7[i];
    cout << "\ncurrent capacity of v7 is " << v7.capacity() << endl;
    v7.pop_back();
    for (int i = 0; i <= v7.size(); i++)
        cout << "\n"
             << v7[i];
    cout << "\ntotal number of element in vector array " << v7.size();
    cout << "\ncurrent capacity of v7 is " << v7.capacity() << endl;
    v7.pop_back();
    for (int i = 0; i <= v7.size(); i++)
        cout << "\n"
             << v7[i];
    cout << "\ntotal number of element in vector array " << v7.size();
    cout << "\ncurrent capacity of v7 is " << v7.capacity() << endl;
    v7.pop_back();
    v7.clear();
    cout<<"total number of element in the vector array is "<<v7.size();
    
    cout<<"\n\n";
    vector<int>v8{10,20,30,40};
    vector <int> :: iterator it=v8.begin();
    v8.insert(it+2,35);
    for(int i=0;i<=v8.size();i++)
    cout<<v8[i]<<" ";

}