// #include<stdio.h>
// int main()
// {
//     int a[10]={1,2,1,1,1,3};
//     int match,i,count=0;
    
//     printf("enter the number the match digit ");
//     scanf("%d",&match);
//     for(int i=0;i<10;i++)
//     {
//         if(a[i]==match)
//         count++;
//     }
//     printf("%d",count);
// }

#include<stdio.h>
int main()
{
    int count=0;
    long d,n;
    printf("enter the number ");
    scanf("%ld",&n);
    printf("enter the match number");
    scanf("%ld",&d);
    while(n>0)
    {
        if(n%10==d)
        {
            count++;
        }
        n=n/10;
    }
    printf("%d",count);
}