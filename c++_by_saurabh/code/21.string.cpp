#include <iostream>
#include <string>
#include<string.h>
using namespace std;
int main()
{
    string s1;
    s1.assign("hello");
    cout << s1 << endl;
    string s2 = "hello";
    s2.append(" student");
    cout << s2 << endl;
    s2.insert(2, "123");
    cout << s2 << endl;
    s2.replace(2, 2, "a");
    cout << s2 << endl;
    s2.replace(1, 3, "a");
    s2.erase();
    cout << s2 << endl;
    string s3 = "helllo online student 00";
    int index = s3.find("0");
    cout << index << endl;
    int index1 = s3.rfind("0");
    cout << index1 << endl;
    string s4 = "amit";
    string s5 = "amar";
    int result = s4.compare(s5);
    cout << result << endl;
    int result1 = s5.compare(s4);
    cout << result1 << endl;

    string s6 = "amit";
    string s7 = "amit";
    int result2=s6.compare(s7);
    cout<<result2<<endl;

    string s8="hellote";
    char c2[10];
    strcpy(c2,s8.c_str());
    int size=s8.size();
    cout<<c2<<endl<<size<<endl;
}
