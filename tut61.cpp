#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2, 7, 9, 5, 8, 4};
    sort(arr, arr+5);
    sort(arr, arr+5, greater<int>()); //it will sort in descending order 
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}