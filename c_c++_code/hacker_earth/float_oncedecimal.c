#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    printf("%d ", (a + b));
    printf("%d\n", (a - b));
    printf("%.1f ", c + d);
    printf("%.1f", c - d);

    return 0;
}
