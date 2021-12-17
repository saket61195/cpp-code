/* #include <iostream>
int main()
{
    using namespace std;
    int a = 14, b = 15;
    cout << "hello";
    cout << a++;
    cout << a;
    float d = 34.4f;
    long double e = 34.4l;
    cout << "sizee of 34.4 is " << sizeof(34.4) << endl;
    cout << "sizee of 34.4f is " << sizeof(34.4f) << endl;
    cout << "sizee of 34.4F is " << sizeof(34.4F) << endl;
    cout << "sizee of 34.4l is " << sizeof(34.4l) << endl;
    cout << "sizee of 34.4L is " << sizeof(34.4L) << endl;
} */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 4, b = 44, c = 4888;
    cout << "value of a without setw " << a << endl;
    cout << "value of b without setw " << b << endl;
    cout << "value of c without setw " << c << endl;

    cout << "\n\n";

    cout << "value of a  " << setw(4) << a << endl;
    cout << "value of b  " << setw(4) << b << endl;
    cout << "value of c  " << setw(4) << c << endl;
}