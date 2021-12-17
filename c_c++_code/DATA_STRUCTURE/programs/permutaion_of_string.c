#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(char *x, char *y)
{
    char ch;
    ch = *x;
    *x = *y;
    *y = ch;
}
void permutaion(char *s, int i, int n)
{
    static int count;
    int j;
    if (i == n)
    {
        count++;
        printf("(%d) %s\n", count, s);
    }
    else
        for (j = i; j <= n; j++)
        {
            swap((s + i), (s + j));
            permutaion(s, i + 1, n);
            swap((s + i), (s + j));
        }
}

int main()
{
    char *str;
    str = malloc(1);
    printf("enter the string ");
    gets(str);
    int n = strlen(str);
    permutaion(str, 0, n - 1);

    // char str[]="abc";
    // permutaion(str, 0, 2);

    // char str[] = "ABC";
    // int n = strlen(str);
    // permutaion(str, 0, n - 1);
    // return 0;
}