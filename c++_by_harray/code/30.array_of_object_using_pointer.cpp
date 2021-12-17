#include<iostream>
using namespace std;

class shopItem
{
    int id;
    float price;
    public:
    void setData(int a,float b)
    {
        id= a;
        price = b;
    }
    void getData()
    {
        cout<<"code of this item is "<<id<<endl;
        cout<<"price of this item is "<<price<<endl;
    }
};

int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int p,i;
    float q;
    for (i=0;i<size;i++)
    {
        cout<<"enter the id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
{
    cout<<"item number is "<<i+1<<endl;
    ptrTemp->getData();
    ptrTemp++;
}
}