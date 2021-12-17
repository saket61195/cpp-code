#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    //fin.open("/home/saket/learning/test_example/file handling/data_file/abc.text");
    fin.open("./data_file/abc.text");
    int pos;
    pos = fin.tellg();
    cout<<pos;
    fin>>ch;
    pos = fin.tellg();
    cout<<pos;
    fin>>ch;
    pos = fin.tellg();
    cout<<pos;
    fin>>ch;
    pos = fin.tellg();
    cout<<pos;
    fin.close();

}