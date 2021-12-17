#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    // fout.open("/home/saket/learning/test_example/file handling/data_file/abc.text",ios::ate|ios::app);
    //fout.open("./data_file/abc.text",ios::ate|ios::app);
    fout.open("../check_karo/abc.txt",ios::ate|ios::app);
    cout<<fout.tellp();
    cout<<"\n"<<fout.tellp();
    fout<<"ABCDEFGH";
    // fout.seekp(0);
    fout.seekp(6);
    cout<<"\n"<<fout.tellp();

    cout<<"\n"<<fout.tellp();
    fout.seekp(2,ios_base::cur);
    cout<<"\n"<<fout.tellp();
    cout<<"\n"<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<"\n"<<fout.tellp();
    fout.seekp(-2,ios_base::end);
    cout<<"\n"<<fout.tellp();
    fout.close();
}