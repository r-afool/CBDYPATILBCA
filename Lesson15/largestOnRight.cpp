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
    int maxOnRight[1000];
    maxOnRight[n-1] = -1;
    // for(int i = 0; i < n-1; i++){
    //     //find maximum in range i+1 -> end
    //     int maxEle = arr[i+1];
    //     for(int j = i+1; j < n; j++){
    //         maxEle = max(maxEle,arr[j]);
    //     }
    //     maxOnRight[i] = maxEle;
    // }
    int maxSoFar = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        maxOnRight[i] = maxSoFar;
        // maxSoFar = max(maxSoFar,arr[i]);
        if(arr[i] > maxSoFar){
            maxSoFar = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout<<maxOnRight[i]<<" ";
    }
    return 0;
}