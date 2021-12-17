#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char BEG, char AUX, char END)
{
    if (n >= 1)
    {
        //     printf("\n Move disk 1 from rod %c to rod %c", BEG, END);
        //     return;
        // }

        towerOfHanoi(n - 1, BEG, END, AUX);
        printf("\n Move disk %d from rod %c to rod %c ", n, BEG, END);
        towerOfHanoi(n - 1, AUX, BEG, END);
    }
}

int main()
{
    int n = 3;                      // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}
