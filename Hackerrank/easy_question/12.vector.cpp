// * Print the integers in the sorted order one by one in a single line followed by a space


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector <int>v;
    int i,x,y=0;

    // * user input in vector 
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>y;
        v.push_back(y);
    } 

    // * sorting in vector
    
    sort(v.begin(),v.end());
    for(i=0;i<x;i++)
    {
        cout<<v[i]<<" ";
    } 
    return 0;
    
}
