#include <iostream>
using namespace std;
int binary_search(int a[], int size, int data)
{
    int l, r, mid;
    l = 0;
    r = size - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (data == a[mid])
        {
            return mid;
        }
        else if (data < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int a[] = {5, 9, 17, 23, 25, 45, 59, 71, 89};
//     int x = 8;
//     int n = sizeof(a) / sizeof(a[0]);
//    int result= binary_search(a, n, x);
int result = binary_search(a,9,89);
   if(result==-1)
   {
       cout<<"element  not found ";
   }
   else
   {
       cout<<"element found at index "<<result;
   }
}