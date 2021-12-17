#include<iostream>
#include<vector>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, size, value, which, index;
    cout<<"enter the number ";
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cout<<"size";
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cout<<"which index";
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}