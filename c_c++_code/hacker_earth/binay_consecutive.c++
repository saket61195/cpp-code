#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,sum=0,i=0,rem,k=0,count=1,m=0;
    cin >> n;
    int ar[1000];
    int count1[1000];
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
while(n!=0){
    rem=n%2;
    ar[k]=rem;
    k++;
    n=n/2;
}
for(i=0;i<k;i++){
    if(ar[i]==1 && ar[i+1]==1){
        count++;
    }else{
        count1[m]=count;
        m++;
        count=1;
        
    }
}
count1[m]=count;
        m++;
        count=0;
        sort(count1,count1+m);
        cout<<count1[m-1];
}