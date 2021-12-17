#include <stdio.h>

int main(void)
{
    printf("The size of an int pointer is %ld bytes!\n", sizeof(char *));
    printf("The size of a char pointer is %ld bytes!\n", sizeof(int *));
    printf("The size of a short pointer is %ld bytes!\n", sizeof(short *));
    printf("The size of a long pointer is %ld bytes!\n", sizeof(long *));
    printf("The size of a float pointer is %ld bytes!\n", sizeof(float *));
    printf("The size of a double pointer is %ld bytes!\n", sizeof(double *));
    printf("The size of a void pointer is %ld bytes!\n", sizeof(void *));
    return (0);
}
//note On 64-bit machines, pointers take up 8 bytes of memory (on 32-bit machines, they take up 4 bytes)