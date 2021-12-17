#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    
    p=&a;
    q=&b;
    printf("old p= %u\n",p);
    
    p=p+1;
    printf("new p = %u\n",p);
    printf("old q= %u\n",q);
   
    q=q+2;
    printf("new q = %u\n",q);
    printf("new q- new p = %u\n",q-p);
}