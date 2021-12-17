#include<stdio.h>
int main()
{
	int arr[] = {10, 20, 30, 40, 50, 60};
	int *ptr1 = arr;
	int *ptr2 = arr + 5;
	printf("Number of elements between two pointer are: %d\n", 
								(ptr2 - ptr1));
	printf(" %u\n", (char*)ptr1 );
	printf(" %u\n", (char*)ptr2 );
	printf("%d\n",sizeof(char));
	
	printf("Number of bytes between two pointers are: %ld\n", 
							(char*)ptr2 - (char*) ptr1);
	return 0;
}
