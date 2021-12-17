// #include<iostream>
// #include<map>
// using namespace std;


// int main()
// {

//    map<pair<int ,int> ,int > m;
//    m.insert({{1, 2}, 100});
//    cout << m[{1, 2}];
// }


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q,type,marks;
    cin>>q;
    string name;
    map<string ,vector<int>>mp;
    for(int i=0;i<q;i++)
    {
        cin>>type>>name;
        int n1;
        /*switch (type) {
        case 1:
        cin>>n1;
        cin>>marks;
    
        }*/
        /*if(type == 1){
            cin>>n1;
            stuMarks[name] = stuMarks[name]+n1;
        }else if(type == 2){
            stuMarks.erase(name);
        }else{
            cout<<stuMarks[name]<<"\n";
        }*/
        if(type == 1){
            cin>>n1;
            mp[name].push_back(n1);
        }else{
            for(int j = 0;j<mp[name].size();j++){
                cout<<mp[name][j]<<" ";
            }
        }
    }  
    return 0;
}



