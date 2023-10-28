#include<iostream>
using namespace std;
int main(){
    // cout<<"Hello";
    int age;
    cout<<"Tell your age: ";
    cin>>age;
    // if (age<18 && age>0){
    //     cout<<"You can not come to the party !!"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a pass to come to the party !!"<<endl;
    // }
    // else if(age<0){
    //     cout<<"You are not born yet."<<endl;
    // }
    // else{
    //     cout<<"You can come to the party !! Enjoy :) "<<endl;
    // }
    // Selection control statements: Switchcase statements 
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    //if break is removed from each case then all the remain cases will get run , irrespective of whether they match the condition or not
    cout<<"Done with switch case";
    return 0;
}