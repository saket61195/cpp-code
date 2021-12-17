#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char ch;
    //fout.open("/home/saket/learning/test_example/file handling/data_file/abc.text",ios::app);
    fout.open("./data_file/abc.text",ios::app);
    int pos;
    pos = fout.tellp();
    cout<<pos<<" ";
    fout<<"saketji";
    pos = fout.tellp();
    cout<<pos<<" ";
    fout.close();

}