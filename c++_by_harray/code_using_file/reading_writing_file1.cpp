#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hout("sample61.txt");
    string name;
    cout<<"enter the name ";
    getline(cin,name);
    hout<<name + " tu padhai kar be";
    hout.close();



    ifstream hin("sample61.txt");
    string cotent;
    getline(hin,cotent);
    cout<<cotent;
    hin.close();

}