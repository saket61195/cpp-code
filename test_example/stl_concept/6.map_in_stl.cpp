#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> customer;
    customer[100]="mohan";
    customer[102]="roahan";
    customer[104]="shyan";
    customer[106]="sheida";
    customer[105]="asara";

    map<int,string>c{
        {100,"jj"},
        {200,"hhh"},
        {889,"uuuua"}
        };

    cout<<customer[100]<<endl;
    cout<<c[200];
    cout<<"\n\n";
    customer.insert(pair<int,string>(3,"jjj"));
    map<int,string>::iterator p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->first<<" "<<p->second<<endl;
        p++;
    }
    cout<<endl;
    cout<<customer.at(105)<<endl;
    cout<<c.size()<<endl;
    cout<<c.empty();//check map empty or not zero(0) means map is not empty one(1) means empty
    
}

