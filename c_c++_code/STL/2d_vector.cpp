#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <vector<int>>vec1;
    for(int i=0;i<3;i++)
    {
        vector<int> temp;
        for(int j=0;j<3;j++)
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
}