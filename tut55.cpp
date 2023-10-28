#include<iostream>
using namespace std;
template<class t1=int, class t2=float, class t3=char>
class Anant{
    public:
        t1 a;
        t2 b;
        t3 c;
        Anant(t1 x, t2 y, t3 z){
            a=x;
            b=y;
            c=z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main(){
    Anant<> a(4, 6.4, 'c');
    a.display();
    Anant <float, char, char> g(5, 'b', 'c');
    g.display();
    return 0;
}