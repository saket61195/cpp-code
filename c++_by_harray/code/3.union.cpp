#include <iostream>
using namespace std;
// Union is a user-defined datatype. All the members of union share same memory location.
// Size of union is decided by the size of largest member of union.
// If you want to use same memory location for two or more members,
union farmer
{
    int rice;
    char lagan;
    float money;
};
int main()
{
    union farmer f;
    //f.rice=22;
    f.lagan='c';
   // cout<<f.rice<<endl;
    cout<<f.lagan<<endl;
}
