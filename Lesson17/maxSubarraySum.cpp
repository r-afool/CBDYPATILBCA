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
    int maxSum = arr[0];
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int curSum = 0;
            for(int i = start; i <= end; i++){
                curSum += arr[i];
            }
            maxSum = max(maxSum,curSum);
        }
    }
    cout<<maxSum;
    //n*n*n -> n^3 times
    
    return 0;
}