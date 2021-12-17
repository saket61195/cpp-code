#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    // Write Your Code Here
    char *s[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
   if(n>=1 && n<=9)
    printf("%s",s[n-1]);
    else
    printf("Greater than 9");


    return 0;
}

