#include <iostream>
using namespace std;
template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotProduct(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + (this->arr[i] * v.arr[i]);
        }
        return d;
    }
};

int main()
{
    vector <int> v1(2);
    v1.arr[0]=6;
    v1.arr[1]=10;

    vector <int>v2(2);
    v2.arr[0]=5;
    v2.arr[1]=10;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;

    vector<float> v3(2);
    v3.arr[0] = 6.1;
    v3.arr[1] = 10.1;

    vector<float> v4(2);
    v4.arr[0] = 5.5;
    v4.arr[1] = 10.5;
    float a1 = v3.dotProduct(v4);
    cout << a1 << endl;
}