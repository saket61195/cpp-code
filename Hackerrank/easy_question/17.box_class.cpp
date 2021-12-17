#include <bits/stdc++.h>

using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)
class Box
{
    int l, b, h;
    long long vol;

public:
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box &b1)
    {
        l = b1.l;
        b = b1.b;
        h = b1.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    friend bool operator<(Box &, Box &);
    friend ostream &operator<<(ostream &, Box);
};
// int Box::getLength()
// {
//     return l;
// }
// int Box:: getBreadth()
// {
//     return b;
// }
// int Box:: getHeight()
// {
//     return h;
// }
// long long Box::CalculateVolume()
// {
//     return (long long)l*b*h;
// }
bool operator<(Box &bb1, Box &bb2)
{
    if ((bb1.l < bb2.l) || ((bb1.b < bb2.b) && (bb1.l == bb2.l)) || ((bb1.h < bb2.h) && (bb1.b == bb2.b) && (bb1.l == bb1.l)))
        return true;
    else
        return false;
}

ostream &operator<<(ostream &dout, Box b1)
{
    dout << b1.l << " " << b1.b << " " << b1.h;
    return dout;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}