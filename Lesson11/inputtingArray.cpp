#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    // cin>>arr[0];
    // cin>>arr[1];
    // cin>>arr[4];
    int sum  = 0;
    for(int i = 0; i < n; i++){
        // int val;
        // cin>>val;
        // arr[i] = val;
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<< arr[i]<<" ";
        sum += arr[i];
    }
    cout<<endl<<sum;

    
}
