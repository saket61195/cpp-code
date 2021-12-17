#include <iostream>
using namespace std;
int vol(int, int, int); //V=whl //width , height , length
float vol(int);         //V=4/3πr3
int main()
{
    int w, h, l;
    cout << "enter the width , height and length of cuboid ";
    cin >> w >> h >> l;
    cout << "volume of cuboid is " << vol(w, h, l);

    float r;
    cout << "\nenter the radius of sphare ";
    cin >> r;
    cout << "volume of the sphare " << vol(r);
}
int vol(int x, int y, int z)
{
    return x * y * z;
}
float vol(int r)
{
    return (4 / 3) * (3.14 * r * r * r);
}