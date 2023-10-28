#include<iostream>
using namespace std;
class complex{
    //creating a constructer    
    int a,b;
    public:
    complex(int ,int); //constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex :: complex(int x, int y){ //-->>This is parameterized constructor as it takes two parameters here
    a=x;
    b=y;
}
int main(){
    //implicit call
    complex a(4,6);
    a.printNumber();
    //explicit call
    complex b=complex(5,8);
    b.printNumber();

    return 0;
}