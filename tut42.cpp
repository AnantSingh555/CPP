#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j) : a(i), b(a+j){
        // Test(int i, int j) : b(j+a),a(i){ -->This will work
        // Test(int i, int j) : b(j), a(b+i){  -->This will give error as a is intitalised first before b in line 5 and 6 
        
        Test(int i, int j) : a(i), b(j){
            cout<< "Constructor executed"<<endl;
            cout<< "The value of a is "<<a<<endl;
            cout<< "The value of b is "<<b<<endl;
        }
};
int main(){
    Test(4,5);
    return 0;
}