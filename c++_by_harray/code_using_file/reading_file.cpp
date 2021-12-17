#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    string st = "this is first file program";
    ofstream out("read1.txt");
    out<<st;
}