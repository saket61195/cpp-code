#include<iostream>
#include<array>
using namespace std;
int main()
{
    // array <int,5> array_data;
    // for(int i=0;i<array_data.size();i++)
    // {
    //     cin>>array_data[i];
    // }
    // for(int i=0;i<array_data.size();i++)
    // {
    //     cout<<array_data[i]<<" ";
    // }
    array <int,6>array_data1={10,33,441,6,21,1};
    array <int,6> array_data2={33,66,33,55,33,11};
    cout<<array_data1.at(5)<<endl;
    cout<<array_data1[4]<<endl;
    cout<<array_data1.front()<<endl;
    cout<<array_data1.back()<<endl;
    array_data1.swap(array_data2);

    for(int i=0;i<array_data1.size();i++)
    {
        cout<<array_data1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<array_data2.size();i++)
    {
        cout<<array_data2[i]<<" ";
    }

}