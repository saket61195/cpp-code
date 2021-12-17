// #include<stdio.h>
// int main()
// {
//     int a[5],*p,i;
//     p=&a[0];
//     for(i=0;i<6;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<6;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }


#include<stdio.h>
int main()

{
    int a[5],*p,i;
    p=&a[0];
    for(i=0;i<6;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",*(p+i));
    }
}