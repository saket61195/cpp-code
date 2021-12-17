#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector <int> vec;
    int n,b;;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        vec.push_back(b);
    } 
    sort(vec.begin(),vec.end());
    int x,y;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>y;
        auto ptr=lower_bound(vec.begin(),vec.end(),y);
        if(*ptr==y)
        {
            cout<<"Yes"<<" "<<(ptr-vec.begin()+1)<<endl;
        }
        else
        {
            cout<<"No"<<" "<<(ptr-vec.begin()+1)<<endl;
        }
    }
    
    
    return 0;
}
