#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
        void setdata(void){
            cout<<"Enter the id : "<<endl;
            cin>>id;
            count++;
        }
        void getdata(void){
            cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount (void){
            //cout<<id; //throws an error
            cout<<"The value of count is "<<count<<endl;
        }
};
int Employee:: count; //the default value is 0
int main(){
    Employee Anant,Avinash,Anmol;
    // Anant.id=1;
    // Anant.count=1; //cannot do this as id and count are private
    Anant.setdata();
    Anant.getdata();
    Employee::getCount();

    Avinash.setdata();
    Avinash.getdata();
    Employee::getCount();

    Anmol.setdata();
    Anmol.getdata();
    Employee::getCount();
    return 0;
}