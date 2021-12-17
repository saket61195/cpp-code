
#include <stdio.h>

int main()
{
     int n,p=1;
    scanf("%d", &n);
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%li", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        p = (p * a[i])%(1000000007);
    }
    printf("%d", p);
}




// #include <stdio.h>
//  int main()
//  {
//    unsigned N, i, answer = 1;
//    do
//    {
//    scanf("%d", &N);
//    }
//    while(N < 1 && N > 1000);
//    long int a[N];
//    for(i = 0; i < N ; i++)
//    {
//         do
//         {
//              scanf("%li", &a[i]);
//         }
//         while(a[i] < 1 && a[i] > 1000);
//    }
//    for(i = 0; i < N; i++)
//    {
//         answer = (answer * a[i]) % (1000000007);
//    }
//    printf("%i", answer);
//  }