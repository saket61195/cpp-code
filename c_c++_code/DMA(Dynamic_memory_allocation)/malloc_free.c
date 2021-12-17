#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("enter the number \n");
    scanf("%d",&n);
    ptr=(int *)malloc(n * sizeof(int));
    if(ptr==NULL)
    {
        printf("no memory alloctaed ");
        exit(0);
    }
    else
    {
        printf("enter the element\n ");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
            sum=sum+ *(ptr+i);
        }
        printf("%d ",sum);
    }
    free(ptr);
    
}