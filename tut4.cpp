// manipulators in C++
#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int a=2, b=78, c=1234;
    cout<<"The value of a without setw is :"<<a<<endl;
    cout<<"The value of b without setw is :"<<b<<endl;
    cout<<"The value of c without setw is :"<<c<<endl;

    cout<<"The value of a is :"<<setw(4)<<a<<endl;
    cout<<"The value of b is :"<<setw(4)<<b<<endl;
    cout<<"The value of b is :"<<setw(4)<<c<<endl;
    return 0;
}