/* #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


 int main() {
    
    int q,type,marks;
    cin>>q;
    string name;
    map<string ,int >stuMarks;
    for(int i=0;i<q;i++)
    {
        cin>>type>>name;
        int n1;
        // switch (type) {
        // case 1:
        // cin>>n1;
        // cin>>marks;
    
        // }
        if(type == 1){
            cin>>n1;
            stuMarks[name] = stuMarks[name]+n1;
        }else if(type == 2){
            stuMarks.erase(name);
        }else{
            cout<<stuMarks[name]<<"\n";
        }
    }  
    return 0;
} */


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
    int q,x,marks;
    string name;
    cin>>q;
    map<string,int>student;
    for(int i=0;i<q;i++)
    {
        cin>>x>>name;
        if(x==1)
        {
            cin>>marks;
            student[name]=student[name]+marks;
        }
        if(x==2)
        {
            student.erase(name);
        }
        if(x==3)
        {
            cout<<student[name]<<endl;
        }
    }  
    return 0;
}
