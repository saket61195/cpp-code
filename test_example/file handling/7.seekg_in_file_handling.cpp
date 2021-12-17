#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    //fin.open("/home/saket/learning/test_example/file handling/data_file/abc.text");
    fin.open("./data_file/abc.text");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    // fin.seekg(0);
    fin.seekg(6);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(2,ios_base::cur);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(2,ios_base::beg);
    cout<<"\n"<<fin.tellg();
    fin.seekg(-2,ios_base::end);
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();




}