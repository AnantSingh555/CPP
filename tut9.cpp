#include<iostream>
using namespace std;

struct employee{
    int eId;
    char favChar;
    float salary;
};
typedef struct student{
    int rollNO;
    string Name;
    int Marks;
}st;
union money{
    int rice;
    char car;
    float pounds;
};
int main(){
    enum Meal{breakfast, lunch, dinner};
    Meal m=lunch;
    cout<<(m==0)<<endl;

    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car<<endl;

    struct employee Anant;
    Anant.eId=1;
    Anant.favChar='a';
    Anant.salary=1500000;
    cout<<"The value is "<<Anant.eId<<endl;
    cout<<"The value is "<<Anant.favChar<<endl;
    cout<<"The value is "<<Anant.salary<<endl;
    st Avinash;
    Avinash.rollNO=12;
    Avinash.Name="Avinash";
    Avinash.Marks=85;
    cout<<"The value is "<<Avinash.rollNO<<endl;
    cout<<"The value is "<<Avinash.Name<<endl;
    cout<<"The value is "<<Avinash.Marks<<endl;


    return 0;
}