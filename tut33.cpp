#include<iostream>
using namespace std;
//Base Class
class Employee{
    public:
        int id;
        float salary;
        Employee(int inpId){
            id=inpId;
            salary=45.0;

        }
        Employee(){}
};
//Derived Class Syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    memebers/methods/etc....
}*/
//creating a programmer class derived from Employee base class 
class Programmer : public Employee{
    public:
    int languageCode;
    Programmer (int inpId){
        id=inpId;
        languageCode=9;
    }
    void getData(){
        cout<<id<<endl;
    }
};
int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode;
    skillf.getData();

    return 0;
}