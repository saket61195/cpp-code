
// * input will contain four integers -  , one per line.

// * Output Format

// * Return the greatest of the four integers.
// * PS: I/O will be automatically handled.

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int w, int x, int y, int z)
{
    if (w > x && w >y && w > z)
    {
        return w;
    }
    else if (x > w && x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > w && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}