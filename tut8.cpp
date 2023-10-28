#include<iostream>
using namespace std;

int main(){
    int marks[4]={20,30,39,48};
    int mathsmarks[4];
    mathsmarks[0]=23;
    mathsmarks[1]=43;
    mathsmarks[2]=24;
    mathsmarks[3]=57;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
 
    for(int i=0;i<4;i++){
        cout<<"The value of marks "<<i<<" is :"<<marks[i]<<endl;
    }
    int i=0;
    while(i<4){
        cout<<"The value of marks "<<i<<" is :"<<marks[i]<<endl;
        i++;
    }
    int b=0;
    do{
        cout<<"The value of marks "<<b<<" is :"<<marks[b]<<endl;
        b++;
    }while(b<4);
    // pointers and arrays
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}