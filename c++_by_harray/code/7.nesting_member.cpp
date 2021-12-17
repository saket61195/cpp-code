/* #include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read();
    void check_binary();
    void ones_complement();
    void display();
};

void binary ::read()
{
    cout << "enter a binary a number " << endl;
    cin >> s;
}
void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a valid binary";
            exit(0);
        }
    }
}

void binary::ones_complement()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='1')
        s.at(i)='0';
        else
        s.at(i)='1';
    }
}
void binary ::display()
{
    cout<<"Displaying your binary number"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.check_binary();
    b.display();
    b.ones_complement();
    b.display();
}
 */

#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    void check_binary();

public:
    void read();
    void ones_complement();
    void display();
};

void binary ::read()
{
    cout << "enter a binary a number " << endl;
    cin >> s;
}
void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a valid binary";
            exit(0);
        }
    }
}

void binary::ones_complement()
{
    check_binary(); //nesting function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
            s.at(i) = '0';
        else
            s.at(i) = '1';
    }
}
void binary ::display()
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.check_binary(); //it will give error because check_binary() is declare in private
    b.display();
    b.ones_complement();
    b.display();
}
