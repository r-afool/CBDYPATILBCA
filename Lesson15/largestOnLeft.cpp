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
    int ans[1000];
    ans[0] = -1;
    // for(int i = 1; i < n; i++){
    //     //find me the largest element in the range 0->i-1
    //     int maxEle = arr[0];
    //     for(int j = 0; j < i; j++){
    //         if(arr[j] > maxEle){
    //             maxEle = arr[j];
    //         }
    //     }
    //     ans[i] = maxEle;
    //     // 0->i-1
    // }
    int maxSoFar = arr[0];
    for(int i = 1; i < n; i++){
        ans[i] = maxSoFar;
        // maxSoFar = max(maxSoFar,arr[i]);
        if(arr[i] > maxSoFar){
            maxSoFar = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}