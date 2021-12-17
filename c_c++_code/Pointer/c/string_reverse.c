#include <stdio.h>

char *reverse(char *);
int length(char *);
int main()
{
    char str[] = "computer";
    printf("\n length of string = %d\n", length(str));
    printf("\n%s\n", reverse(str));
}

int length(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    return i;
}
char *reverse(char *p)
{
    int l, i;
    char temp;
    for (l = 0; *(p + l) != '\0'; l++)
        ;
    for (i = 0; i < l / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = temp;
    }
    return (p);
}
