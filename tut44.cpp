#include<iostream>
using namespace std;
class Complex{
    int real, imaginary;
    public:
        void GetData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void SetData(int a, int b){
            real=a;
            imaginary=b;
        }
};
int main(){
    // Complex C1;
    // Complex *ptr= &C1;
    Complex *ptr= new Complex;
    // (*ptr).SetData(3,4); --> is exactly same as 
    ptr->SetData(3,4);

    // (*ptr).GetData --> is as good as
    ptr->GetData();

    // Array of objects

    Complex *ptr1= new Complex[4] ;
    // (*ptr).SetData(3,4); --> is exactly same as 
    ptr1->SetData(3,4);

    // (*ptr).GetData --> is as good as
    ptr1->GetData();
    return 0;
}