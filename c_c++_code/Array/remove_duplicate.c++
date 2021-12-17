// //when sorted
// #include<iostream>
// using namespace std;
// int a[]={1,2,2,3,3,4,4,6,6,7,7};
// int temp[10];
// int i,j=0;
// int main()
// {
//     for(i=0;i<11;i++)
//     {
//         if(a[i]!=a[i+1])
//         {
//             temp[j]=a[i];
//             j++;
//         }
//     }
//     for(i=0;i<9;i++)
//     {
//         if(temp[i]!=0)//1 2 3 4 5 6 0 0 0 
//     cout<<temp[i]<<" ";//1 2 3 4 5 6 
//     }
// }



#include<iostream>
using namespace std;
int a[]={1,2,2,3,3,4,4,6,6,7,7};
int i,j=0;
int main()
{
    for(i=0;i<11;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
       
    cout<<a[i]<<" ";//1 2 3 4 5 6 
    }
}

//when unsorted