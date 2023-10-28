#include<iostream>
using namespace std;
class complex{
    //creating a constructer    
    int a,b;
    public:
    complex(void); //constructor declaration
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex :: complex(void){ //-->This is a default constructor as it accepts no parameters
    a=10;
    b=0;
}
int main(){
    complex c;
    c.printNumber();
    return 0;
}