#include<stdio.h>
void input(int *p)
{
    int i;
    printf("enter the element in array\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",p+i);
    }
}
void display(int *p)
{
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d \t",*(p+i));
    }
    printf("\n");
}
void sort(int *p)
{
    int i,j,temp;
    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d \t",*(p+i));
    }
}
int main()
{
    int i,*p;
    int a[5];
    input(a);
    display(a);
    sort(a);
}
