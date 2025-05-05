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
    // in my maxOnLeft array, i want to store, at the ith index
    // the maximum array value in the range 0 -> i
    maxOnLeft[0] = arr[0];
    int maxSoFar = arr[0];
    for(int i = 1; i < n; i++){
        maxSoFar = max(maxSoFar,arr[i]);
        maxOnLeft[i] = maxSoFar;
    }
    // in my minOnRight array, i want to store, at the ith index
    // the minimum array value in the range i -> n-1
    int minSoFar = arr[n-1];
    minOnRight[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        minSoFar = min(minSoFar,arr[i]);
        minOnRight[i] = minSoFar;
    }
    int count = 1;
    for(int i = 0; i < n-1; i++){
        //can I start a new partition at the ith 
        //i.e. check if all the elements in the range 
        //0->i > all the elements in the range i+1->n-1
        if(maxOnLeft[i] <= minOnRight[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}