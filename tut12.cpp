#include<iostream>
using namespace std;
inline int product(int a, int b){
    // not to use the below commented out lines with inline function
    // static c=0;//This will execute only once
    // c=c+1; //Next time this function is run, the value of c will be retained
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney * factor;
}
int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b);
    int money=100000;
    cout<<"If you have "<<money<<"Rs in your bank account, you will receive "<<moneyreceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money,1.1)<<"Rs after one year"<<endl;
    return 0;
}