#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> mathMarks;
    mathMarks["saket"]=77;
    mathMarks["ravi"]=66;
    mathMarks["john"]=55;
    mathMarks["sara"]=44;

    mathMarks.insert({{"rohan",88},{"sohan",99}});
map<string,int>:: iterator itr;
for(itr=mathMarks.begin(); itr!=mathMarks.end();itr++)
{
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
}
    return 0;

}