#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> gquiz1;

    // insert elements in random order

    gquiz1.insert(pair<int, int>(1, 40));
    gquiz1.insert(pair<int, int>(2, 30));
    gquiz1.insert(pair<int, int>(3, 60));
    gquiz1.insert(pair<int, int>(4, 20));
    gquiz1.insert(pair<int, int>(5, 50));
    gquiz1.insert(pair<int, int>(6, 50));
    gquiz1.insert(pair<int, int>(7, 10));

    map<int, int>::iterator itr;

    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;

    return 0;
}

/* #include<iostream>
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

} */