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
    int majEle = arr[0], lead = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == majEle){
            lead++;
        }
        else{
            lead--;
            if(lead == -1){
                majEle = arr[i];
                lead = 1;
            }
        }
    }
    int freq = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == majEle){
            freq++;
        }
    }
    if(freq > n/2){
        cout<<majEle;
    }
    else{
        cout<<"Majority element does not exist";
    }

    return 0;
}