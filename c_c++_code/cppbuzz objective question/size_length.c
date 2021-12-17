
#include<stdio.h>
#include<string.h>
int main()
{
char name[]="Cppbuz";
int len;
int size;
len = strlen(name);
size = sizeof(name);
printf("%d,%d\t",len,size);
 return 0;
}