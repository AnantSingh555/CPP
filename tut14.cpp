#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"Using function with 2 arguments --> ";
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using function with 3 arguments --> ";
    return a+b+c;
}
int main(){
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The sum of 4, 5 and 6 is "<<sum(4,5,6)<<endl; 
    return 0;
}