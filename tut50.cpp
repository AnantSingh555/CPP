#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //opening files using constructor
    string st="Harry bhai";
    ofstream out("sample50.txt"); //write operation
    out<<st;
    string st2;
    ifstream in("sample50b.txt");
    // in>>st2;
    getline(in, st2);
    cout<<st2;
    return 0;
}