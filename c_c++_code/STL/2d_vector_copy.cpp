#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int x1,y,size;
    cout<<"enter the number of rows ";
    cin>>x1;
    cout<<"enter the number of qwery ";
    cin>>y;
    vector <vector<int>>vec1;
    for(int i=0;i<x1;i++)
    {
        vector<int> temp;
        cout<<"enter the size ";
        cin>>size;
        for(int j=0;j<size;j++)
        {
            int x;
            cout<<"enter the number ";
            cin>>x;
            temp.push_back(x);
        }
        vec1.push_back(temp);
    }
    cout<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        for(int j=0;j<vec1[i].size();j++)
        {
            cout<<vec1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<y;i++)
    {
        int index,loc;
        cout<<"enter the index and postion number ";
        cin>>index>>loc;
        cout<<vec1[index][loc]<<endl;
    }

}