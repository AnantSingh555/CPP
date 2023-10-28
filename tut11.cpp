#include<iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return 0;
}
//This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp=a;          //4    4 5
    a=b;                 //4    5 5
    b=temp;              //4    4 5
} 
void swapPointer(int* a,int* b){ //temp a b
    int temp=*a;          //4    4 5
    *a=*b;                 //4    5 5
    *b=temp;              //4    4 5
} 
//Call by reference using C++ reference variables
// void swapReferenceVar(int &a, int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
int & swapReferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    int x=4, y=5;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    //swap(x,y); This will not swap a and b
    //swapPointer(&x,&y); This will swap a and b using pointer reference.
    swapReferenceVar(x,y)=766; // This will swap a and b using reference.
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    return 0;
}