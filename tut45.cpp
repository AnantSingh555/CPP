#include<iostream>
using namespace std;
class ShopItem{
    int id;
    float price;
    public:
        void SetData(int a, float b){
            id=a;
            price=b;
        }
        void GetData(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size=2;
    ShopItem *ptr= new ShopItem[size];
    ShopItem *ptrtemp= ptr;
    int p,q,i;
    for(i=0;i<size;i++)
    {
        cout<<"Enter id and price of the item "<<i+1<<endl;
        cin>>p>>q;
        ptr->SetData(p,q);
        ptr++;
    }
    for (i=0; i<size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptrtemp->GetData();
        ptrtemp++;

    }
    return 0;
}