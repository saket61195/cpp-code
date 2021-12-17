#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("/home/saket/learning/test_example/file handling/data_file/test1.text",ios::app|ios::binary);
    fout<<" hello world\nsaket";
    fout.close();
}
