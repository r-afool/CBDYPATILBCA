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
    int s = 0, e = n-1;
    int ans = -1;
    // bool flag = false;
    while(s<=e){
        int m = (s+e)/2;
        if(arr[m] < target){
            //i should discard the left half
            //or i can say, i should shift my starting point
            s = m+1;
        }
        else if(arr[m] > target){
            //i should discard the right half
            //or i can say, i should shift the ending point
            e = m-1;
        }
        else{
            ans = m;
            break;
        }
    }
    if(ans == -1){
        cout<<"Element was not present in the array";
    }
    else{
        cout<<"Elemt was found at index "<<ans;
    }


}