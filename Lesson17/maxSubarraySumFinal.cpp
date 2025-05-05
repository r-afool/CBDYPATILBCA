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
    
    //KADANE'S ALGORITHM
    int x = arr[0]; //x_0
    int maxSum = arr[0];
    for(int i = 1; i < n; i++){
        //x right now stores x_(i-1)
        //max subarray sum for all subarrays that ends at (i-1)th index

        x = max(x+arr[i],arr[i]);//x_i = max(x_(i-1) + arr[i], arr[i])

        maxSum = max(maxSum,x);//maxSum = max(maxSum,x_i)
    }
    cout<<maxSum;
    // n
    return 0;
}