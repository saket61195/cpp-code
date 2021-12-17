#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s1;
    s1.insert(60);
    s1.insert(70);
    s1.insert(80);
    s1.insert(90);
    s1.insert(100);
    s1.insert(110);
    set<int>:: iterator itr;
    for(itr = s1.begin();itr!=s1.end();itr++)
    {
        cout<<*itr<<" ";
    }
       cout<<endl;
    return 0;
}


