#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Harry"]=98;
    marksMap["Jack"]=88;
    marksMap["Rohan"]=79;
    map<string, int> :: iterator itr;
    marksMap.insert({{"Hardy",34},{"Hardy",45}});
    for(itr=marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"The size is "<<marksMap.size()<<endl;
    cout<<"The max size is "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is "<<marksMap.empty()<<endl; //will give 0 as marksMap is not empty
    return 0;
}