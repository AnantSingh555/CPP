#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void setnumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        friend complex sumcomplex(complex o1,complex o2);
        void printnumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex c1,c2;
    c1.setnumber(1,3);
    c2.setnumber(3,6);
    c1.printnumber();
    c2.printnumber();

    return 0;
}