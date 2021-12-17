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
    customer[105]="sara";

    map<int,string>c{{100,"jj"},{200,"hhh"},{889,"uuuua"}};

    cout<<customer[100]<<endl;
    cout<<c[200];
    cout<<"\n\n";
    customer.insert(pair<int,string>(333,"jjj"));
    map<int,string>::iterator p=customer.begin();
    while(p!=customer.end())
    {
        cout<<p->second<<endl;
        p++;
    }
    cout<<customer.at(105)<<endl;
    cout<<c.size()<<endl;
    cout<<c.empty();
    
}

