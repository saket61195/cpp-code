#include <stdio.h>

int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 92.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;

    printf("%f\n ", *ptr1);
    printf("%f\n", *ptr2);
    printf("%u\n", ptr1);
    printf("%u\n", ptr2);
    printf("%d\n", ptr2 - ptr1);

    return 0;
}
