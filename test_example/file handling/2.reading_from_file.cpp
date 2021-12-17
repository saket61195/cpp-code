#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("/home/saket/learning/test_example/file handling/data_file/test1.text");
    char ch;
    // fin>>ch;
    ch=fin.get();
    while(!fin.eof())
    {
        cout<<ch;
        // fin>>ch;
        ch=fin.get();
    }
    fin.close();
}