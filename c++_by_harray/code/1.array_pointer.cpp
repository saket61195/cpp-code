#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 44, 55, 22, 11};
    // for loop
    /* for (int i = 0; i < 5; i++)
        cout << arr[i] << endl; */

    //while loop

    /* int i = 0;
    while (i < 5)

    {
        cout << arr[i] << endl;
        i++;
    } */

    // do while loop

    /* int i = 0;
    do
    {
        cout<<arr[i]<<endl;
        i++;
    } while (i<5); */

    // pointer in array

    int *p = arr;
    /*  cout<<*(p++)<<endl;//10
    cout<<*(p)<<endl;//44
    cout<<*(++p)<<endl;//55 */

    
    cout << "value of address at arr[0] = *p     is " << *p << endl;
    cout << "value of address at arr[1] = *(p+1) is " << *(p + 1) << endl;
    cout << "value of address at arr[2] = *(p+2) is " << *(p + 2) << endl;
    cout << "value of address at arr[3] = *(p+3) is " << *(p + 3) << endl;
    cout << "value of address at arr[4] = *(p+4) is " << *(p + 4) << endl;
}
