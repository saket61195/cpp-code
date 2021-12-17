/* #include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    // string str("Hello from the dark side");
    string str("24,15,33");

    string tmp; // A string to store the word on each iteration.

    stringstream str_strm(str);

    vector<string> words; // Create vector to hold our words

    while (str_strm >> tmp)
    {

        // Provide proper checks here for tmp like if empty
        // Also strip down symbols like !, ., ?, etc.
        // Finally push it.
        words.push_back(tmp);
    }
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
} */



#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    // string str("Hello from the dark side");
    string str("24,15,33");

    char ch; // A string to store the word on each iteration.

    int x; 

    stringstream str_strm(str);

    vector<int> words; // Create vector to hold our words

    while (str_strm >> x)
    {

        // Provide proper checks here for tmp like if empty
        // Also strip down symbols like !, ., ?, etc.
        // Finally push it.
        words.push_back(x);

        str_strm>>ch;
    }
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
}