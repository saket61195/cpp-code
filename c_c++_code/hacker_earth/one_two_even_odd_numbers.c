#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char *s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    scanf("%d\n%d", &a, &b);
    // Complete the code.
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
            printf("%s\n", s[i - 1]);
        else
        {
            printf("%s\n", s[9 + i % 2]);
        }
    }

    return 0;
}
