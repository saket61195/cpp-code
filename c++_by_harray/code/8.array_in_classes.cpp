/* #include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
 */

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void intCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop::setPrice()
{
    cout << "enter your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"price of item with item id  "<<itemId[i]<<"  is "<<itemPrice[i]<<endl;
    }
}
int main()
{
    shop s1;
    s1.intCounter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();
}