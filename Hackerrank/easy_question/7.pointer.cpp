// *  pointer 
// *  *a=*a+b;
// *  *b=|*a-*b|;


#include <stdio.h>
#include<cstdlib>

void update(int *a,int *b) {
    // Complete this function    
    int temp;
    temp=*a;
    *a=*a+*b;
    
    //*b=abs(temp-*b);   
    
    //* abs  get absolute value of any negative number    //abs(num) = |num|
    
    if(temp>*b)
    {
        *b=temp-*b;
    }
    else {
    *b=*b-temp;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
