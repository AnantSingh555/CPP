#include<iostream>
using namespace std;
class base1
{
    public:
        void greet()
        {
            cout<<"How are you ?"<<endl;
        }
};
class base2{
    public:
        void greet()
        {
            cout<<"Kaise ho ?"<<endl;
        } 
};
class derived : public base1, public base2{
    int a;
    public:
        void greet()
        {
            cout<<"wow, very beautiful place"<<endl;
        }
};
class b
{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};
class D : public b
{
    int a;
    
    public:
        void say()
        {
            cout<<"Hello my beautiful world"<<endl;
        }
};
int main(){
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();
    b p;
    p.say();
    D pq;
    pq.say();
    return 0;
}