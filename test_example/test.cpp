// #include<iostream>
// #include<algorithm>
// #include<cmath>
// using std::cin;
// using std::cout;
// using namespace std;
// int main(){
//     int a = 10, b = 10;
//     int &ref = max(a,b);
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
     cin>>size;
    int ar[size];
    for(int i=0;i<size;i++)
    {
        cin>>ar[i];
    }
    for(int i=size-1;i>=0;i--)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}