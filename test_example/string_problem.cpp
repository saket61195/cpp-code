#include<iostream>
#include<string>
#include<algorithm>//sort
using namespace std;
int main()
{
   /*  string str;
    cout<<"enter the string ";
    cin>>str;
    cout<<str<<endl;*/

    /* string str1;
    cout<<"enter the string ";
    getline(cin,str1);
    cout<<str1<<endl; */

   /*  string str2="my name is saket ";
    cout<<str2<<endl; */

    /* string str3(5,'n');
    cout<<str3<<endl; */

    /* string str4="fam";
    string str5="ily";
    //str4=str4+str5;
    str4.append(str5);
    cout<<str4<<endl; */


    /* string str4="fam";
    string str5="ily";
    cout<<str4+str5<<endl;
    cout<<str4[1]<<endl; */

    /* string str6= "fif8fiuvhhhhhhhhhh  hjyftf";
    str6.clear();
    cout<<str6<<endl; */

    /* string str7="abc";
    string str8="xyz";
    cout<<str8.compare(str7)<<endl;
    cout<<str7.compare(str8)<<endl; */

    /* string str7="abc";
    string str8="abc";
    cout<<str8.compare(str7)<<endl;
    cout<<str7.compare(str8)<<endl;
    if(str7.compare(str8)==0)
    {
        cout<<"string match"<<endl;
    }
    else
    {
        cout<<"string not match"<<endl;
    } */

  /*   string str9="abc";
    cout<<str9<<endl;
    str9.clear();
    if(str9.empty())
    {
        cout<<"string is empty "<<endl;
    }
    else
    {
        cout<<"string is not empty"<<endl;
    } */

/* string str10="PRABHAKAR";
str10.erase(3,3);//BHA remove
cout<<str10<<endl;
string str11="PRABHAKAR";
cout<<str11.find("KAR")<<endl;//give index */

/* string str12="PRABHAKAR";
cout<<str12.insert(3,"lol")<<endl;
cout<<str12.length()<<endl;
for(int i=0;i<str12.length();i++)
{
    cout<<str12[i]<<endl;
}

cout<<str12.substr(3,4)<<endl; */


/* string str13="786";
int x= stoi(str13);
cout<<x+2<<endl;
 */

/* int x = 786;
cout<<to_string(x)+"2"<<endl; */

/* string s1="jghghhghhlglqq";
sort(s1.begin(),s1.end());
cout<<s1<<endl;
reverse( s1.begin( ) , s1.end( ) ); 
cout<<s1<<endl; */


string str11="my name is saket prabhakar sinha";
cout<<"string with spaes"<<str11<<endl;
remove(str11.begin(),str11.end(),' ');
cout<<"string without spaces "<<str11<<endl;



}