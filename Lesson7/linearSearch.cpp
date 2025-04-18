#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool isPresent = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            //I have found an index
            cout<<"Element found at index "<<i;
            isPresent = true;
            break;
        }
    }
    if(!isPresent){
        cout<<"Element is not present";
    }

}