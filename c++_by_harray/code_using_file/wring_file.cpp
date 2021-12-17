#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    string st2;
    ifstream in("sample.txt");
    // ifstream in("read1.txt");
    // in>>st2;  // it will not print after space or new line sentences
    getline(in, st2);
    cout << st2 << endl;
    getline(in, st2);
    cout << st2 << endl;
}