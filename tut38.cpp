/*
Exercise Question
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include<iostream>
#include<cmath>
using namespace std;
class simple_calculator{
    protected:
        int num1,num2;
        int sum,diff,prod;
        float div;
    public:
        void get_data_sim(int a,int b){
            num1=a;
            num2=b;
        }
        void operations_sim(){
            sum=num1+num2;
            diff=num1-num2;
            prod=num1*num2;
            div=num1/num2;
        }
        void display_sim(){
            cout<<"The calculations by simple calculator are :"<<endl;
            cout<<""<<endl;
            cout<<"The sum is "<<sum<<endl;
            cout<<"The difference is "<<diff<<endl;
            cout<<"The product is "<<prod<<endl;
            cout<<"The division is "<<div<<endl;
            cout<<""<<endl;
        }
};
class scientific_calculator{
    protected:
        int num3,num4;
        float sqr3,sqr4;
        float cub3,cub4;
        float sqrt3,sqrt4;
        float cbrt3,cbrt4;
    public:
        void get_data_sci(int a,int b){
            num3=a;
            num4=b;
        }
        void operations_sci(){
            sqr3=num3*num3;
            sqr4=num4*num4;
            cub3=num3*num3*num3;
            cub4=num4*num4*num4;
            sqrt3=sqrt(num3);
            sqrt4=sqrt(num4);
            cbrt3=cbrt(num3);
            cbrt4=cbrt(num4);
        }
        void display_sci(){
            cout<<"The calculations by scientific calculator are :"<<endl;
            cout<<""<<endl;
            cout<<"The square of "<<num3<<" is "<<sqr3<<endl;
            cout<<"The square of "<<num4<<" is "<<sqr4<<endl;
            cout<<"The cube of "<<num3<<" is "<<cub3<<endl;
            cout<<"The cube of "<<num4<<" is "<<cub4<<endl;
            cout<<"The square root of "<<num3<<" is "<<sqrt3<<endl;
            cout<<"The square root of "<<num4<<" is "<<sqrt4<<endl;
            cout<<"The cube root of "<<num3<<" is "<<cbrt3<<endl;
            cout<<"The cube root of "<<num4<<" is "<<cbrt4<<endl;
        }
};
class hybrid_calculator : public simple_calculator,public scientific_calculator{
    public:
        void get_data(int a, int b){
            get_data_sim(a,b);
            get_data_sci(a,b);
        }
        void operations(){
            operations_sim();
            operations_sci();
        }
        void display(){
            display_sim();
            display_sci();
        }
};
int main(){
    int a,b;
    cout<<"Enter first number "<<endl;
    cin>>a;
    cout<<"Enter second number "<<endl;
    cin>>b;
    hybrid_calculator c;
    c.get_data(a,b);
    c.operations();
    c.display();
    return 0;
}