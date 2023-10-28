#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int> :: iterator itr;
    for(itr=lst.begin(); itr!=lst.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1; //list of 0 length
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(4);
    list1.push_back(4);
    list1.push_back(1);
    list1.push_back(8);
    
    list1.push_front(2);

    display(list1);
    list1.remove(4);
    list1.pop_front();
    list1.pop_back();
    display(list1);

    list<int> list2(3); //empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 12;
    display(list2);
    //sorting the list
    list2.sort(); 
    display(list2);

    list1.merge(list2);
    display(list1);


    return 0;
}