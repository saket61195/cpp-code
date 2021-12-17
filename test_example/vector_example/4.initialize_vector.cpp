#include<iostream>
#include<vector>
using namespace std;


//!method 1  Initializing by pushing values one by one :
/* 
int main()
{
    vector <int> vect;
    vect.push_back(10);
    vect.push_back(11);
    vect.push_back(12);
    for(int x: vect)
    {
        cout<<x<<" ";
    }
} */


//!method 2 Specifying size and initializing all values :

/* int main()
{
    int n=3;
    vector <int> vect(n,10);
    for(int x: vect)
    {
        cout<<x<<" ";
    }
} */


//!method 3 Initializing like arrays :

/* int main()
{
    vector <int> vect { 10,20,30};
    for(int x: vect)
    {
        cout<<x<<" ";
    }
} */

//!method 4 Initializing from an array :
/* int main()
{
    int arr[]={10,20,30};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    vector<int> vect(arr,arr+n);
    for(int x: vect)
    {
        cout<<x<<" ";
    }
} */


//!method 5 Initializing from another vector :
/* int main()
{
    vector <int> vect1{10,20,30};
    vector <int> vect2(vect1.begin(),vect1.end());
    for(int x: vect2)
    {
        cout<<x<<" ";
    }
} */

//!method 6  Initializing all elements with a particular value :

int main()
{
    vector <int> vect1(10);
    int value =5;
    fill(vect1.begin(),vect1.end(),value);
    for(int x: vect1)
    {
        cout<<x<<" ";
    }
}