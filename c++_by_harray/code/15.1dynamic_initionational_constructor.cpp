#include <iostream>
using namespace std;

class bankDeposit
{
    int principle;
    int year;
    float intrestRate;
    float returnValue;

public:
    bankDeposit()
    {
    }
    bankDeposit(int p, int y, float r);
    bankDeposit(int p, int y, int r);
    void showDeposite()
    {
        cout << "pricliple value was " << principle << " return value  after " << year << " year is " << returnValue << endl;
    }
};
bankDeposit ::bankDeposit(int p, int y, float r)
{
    principle = p;
    year = y;
    intrestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
bankDeposit ::bankDeposit(int p, int y, int r)
{
    principle = p;
    year = y;
    intrestRate = float(r) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}
int main()
{
    bankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "enter the value of p,y and r ";
    cin >> p >> y >> r;
    b1 = bankDeposit(p, y, r);
    b1.showDeposite();

    cout << "enter the value of p,y and R ";
    cin >> p >> y >> R;
    b2 = bankDeposit(p, y, R);
    b2.showDeposite();
    return 0;
}