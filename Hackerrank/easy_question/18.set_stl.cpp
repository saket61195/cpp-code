#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int>s;
    int q,type,query;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>type>>query;
        switch (type) {
        case 1:
        s.insert(query);
        break;
        case 2:
        s.erase(query);
        break;
        case 3:
        auto itr=s.find(query);
        if(itr!=s.end())
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        break;
        }
    }
    return 0;
    }