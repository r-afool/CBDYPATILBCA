#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0 && arr[j-1] > arr[j]; j--){
            swap(arr[j],arr[j-1]);
        }
    }
}