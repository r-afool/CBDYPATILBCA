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
        int curSum = 0;
        for(int end = start; end < n; end++){
            //rather than iterating over the elements between start and 
            //end here again, i only really need to extend my cursum to include 
            //the element at the (end)th element
            curSum += arr[end];
            //curSum right now contains the sum of elements between
            //start and end index
            maxSum = max(maxSum,curSum);
        }
            
    }
    cout<<maxSum;
    //n*n -> n^2 times
    
    return 0;
}