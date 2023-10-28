#include<iostream>
using namespace std;
template<class t>
class Anant{
    public: 
        t data;
        Anant(t a){
            data=a;
        }
        void display();
};
template<class t>
void Anant<t> :: display(){
    cout<<data;
}
void func(int a){
    cout<<"I am first func()"<<a<<endl;
}
template<class t>
void func(t a){
    cout<<"I am templatised func()"<<a<<endl;
}
int main(){
    Anant <int> A(5);
    cout<<A.data<<endl;
    A.display();
    func(4); //Exact match takes the highest priority
    return 0;
}