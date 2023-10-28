#include<iostream>
using namespace std;
class A{
    int a;
    public: 
        // A & SetData(int a){
        void SetData(int a){
            this->a=a;
            // return *this;
        } 
        void GetData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){
    A a;
    a.SetData(4);
    a.GetData();
    return 0;
}