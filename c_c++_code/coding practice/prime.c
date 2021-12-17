#include <stdio.h>
int main()
{
    int i, j, flag, num;
    printf("enter the number ");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = flag + 1;
                break;
            }
        }
        if (flag == 0 && i != 1)

            printf("%d ", i);
    }
}
