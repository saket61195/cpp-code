#include <stdio.h>

int main()
{

    char s[1000];
    int cnt = 0, i, j;

    scanf("%s", s);
    for (j = 0; j < 10; j++)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i]-49 == j)
                cnt++;
        }
        printf("%d ", cnt);
        cnt = 0;
    }

    return 0;
}