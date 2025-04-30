#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n; j++){
    //         if(arr[i] + arr[j] == target){
    //             cout<<arr[i]<<" "<<arr[j]<<endl;
    //         }
    //     }
    // }
    int i = 0, j = n-1;
    while(i<j){
        int curSum = arr[i] + arr[j];
        if(curSum == target){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(curSum > target){
            j--;
        }
        else{
            i++;
        }
    }
    return 0;
}