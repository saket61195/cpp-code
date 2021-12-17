#include <iostream>
#include <vector>
using namespace std;
#define row 3
#define col 3

int main()
{
    vector<vector<int>> a;
    int num = 10;
    for (int i = 0; i < row; i++)
    {
        vector<int> a1;

        for (int j = 0; j < col; j++)
        {
            a1.push_back(num);
            num = num + 5;
        }
        a.push_back(a1);
    }
    cout << "2D vector contains "
         << "\n";
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    a[0].pop_back();
    a[1].pop_back();
    a[2].pop_back();
    cout << endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (auto itr = a[i].begin(); itr != a[i].end(); itr++)
            cout << *itr << " ";
        cout << endl;
    }
}