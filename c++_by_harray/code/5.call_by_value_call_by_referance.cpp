/* #include <iostream>
using namespace std;
void swap(int, int);
int main()
{
    int num1 = 4, num2 = 5;
    cout << "\nbefore swaping value of num1 = " << num1 << " and num2 = " << num2 << endl;
    swap(num1, num2); // it will not swap
    cout << "\nafter swaping value of num1 = " << num1 << " and num2 = " << num2 << endl;
    return 0;
}
// call by value
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
} */





/* #include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
    int num1 = 4, num2 = 5;
    cout << "\nbefore swaping value of num1 = " << num1 << " and num2 = " << num2 << endl;
    swap(&num1, &num2); // it will swap
    cout << "\nafter swaping value of num1 = " << num1 << " and num2 = " << num2 << endl;
    return 0;
}
//call by pointer
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
} */




#include <iostream>
using namespace std;
void swap(int*, int*);
int main()
{
    int num1 = 4, num2 = 5;
    cout << "\nbefore swaping value of num1 = " << num1 << " and num2 = " << num2 << endl;
    swap(num1, num2); // it will swap
    cout << "\nafter swaping value of num1 = " << num1 << " and num2 = " << num2 << endl;
    return 0;
}
//call by reference // c++ feature
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}