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
    int maxOnLeft[1000], minOnRight[1000];
    int maxSoFar = arr[0];
    for(int i = 0; i < n; i++){
        maxSoFar = max(maxSoFar,arr[i]);
        maxOnLeft[i] = maxSoFar;
    }
    int minSoFar = arr[n-1];
    for(int i = n-1; i >= 0; i--){
        minSoFar = min(minSoFar,arr[i]);
        minOnRight[i] = minSoFar;
    }
    //now i will say, let me try to partition at different indexes
    //what does partitioning mean at ith index? 
    // (0 -> ith element ) : left, (i+1, n-1) : right
    //i can find the above values at maxOnLeft[i] and minOnRight[i+1]
    for(int i = 0; i < n-1; i++){
        if(maxOnLeft[i] <= minOnRight[i+1]){
            cout<<i+1;
            break;
        }
    }
    return 0;
}