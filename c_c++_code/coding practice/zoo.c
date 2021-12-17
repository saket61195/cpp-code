#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int count_Z = 0;
    int count_O = 0;
    printf("enter the string ");
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'z')
        {
            count_Z++;
        }
        else
        {
            count_O++;
        }
    }
    if (2 * count_Z == count_O)
    {
        printf("yes");
    }
    else
        printf("No");
}