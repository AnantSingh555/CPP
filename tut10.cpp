#include<iostream>
using namespace std;
// function prototype
// type function name (arguments)
// int sum(int a , int b);--> Acceptable
// int sum(int a , b);-->Not Acceptable
int sum(int , int); //-->Acceptable
void g(void);
int main(){
    int num1, num2;
    // num1 and num2 are actual parameters
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"The sum is --> "<<sum(num1,num2);
    g();
    return 0;
}
int sum(int a, int b){
    // a and b are formal parameters
    int c=a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good Morning !!";
}
