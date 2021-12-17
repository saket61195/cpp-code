#include<stdio.h>
int main()
{
    int x=5;
    int *j;
    j=&x;
    printf("%d\n",x);
    printf("%u\n",&x);
    printf("%d\n",*&x);
    printf("%d %u\n",x,j);
    printf("%d %u\n",*j,&x);
    printf("%u\n",*&j);
}