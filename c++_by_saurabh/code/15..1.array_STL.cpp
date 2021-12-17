#include<iostream>
#include<array>
using namespace std;
int main()
{
    array <int,5> my_array={11,33,55,66,77};
    cout<<"at() method my arrayy index at 4 is "<<my_array.at(4)<<endl;
    cout<<"[]operator method my arrayy index at 4 is "<<my_array[3]<<endl;
    cout<<"front() operator is used to get front value in array "<<my_array.front()<<endl;
    cout<<"back() method will give last value in array "<<my_array.back()<<endl;
    //! fill() method is used to fill same element in the whole array "<<my_array.fill(44)
    my_array.fill(44);
    for(int i=0;i<5;i++)
    cout<<my_array[i]<<" ";
    cout<<"\n";
    //! sawap() is used to swap the containt of two array with same size and same type

    array <float,5> my_array1={11.1,33.2,55.3,66.4,77.5};
    array <float,5> my_array2={4.1,3.2,5.3,6.4,7.5};
    my_array1.swap(my_array2);
    for(int i=0;i<5;i++)
    cout<<my_array1[i];
    cout<<"\n";
    for(int i=0;i<5;i++)
    cout<<my_array2[i];

cout<<"\nsize() method used to calculate size of array "<<my_array1.size();

}
