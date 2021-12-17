#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x,y,index,loc;
    cin>>x>>y;
    int size1,size2,n;
    vector <vector<int>> vecm;// 2d vector 
    for(int i=0;i<x;i++)
    {
        vector<int>vec1;
         cin>>size1;
         for(int j=0;j<size1;j++)
         {
             cin>>n;
             vec1.push_back(n);
         }
         vecm.push_back(vec1);
    }
    for(int i=0;i<y;i++)
    {
          cin>>index>>loc;
          cout<<vecm[index][loc]<<endl;
    }
   
    return 0;
    
}