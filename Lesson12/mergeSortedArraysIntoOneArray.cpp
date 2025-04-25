#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[1000], arr2[1000];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }
    int idx1 = m-1, idx2 = n-1, nextPos = m+n-1;
    while(idx1>=0 && idx2 >= 0){
        int candidate1 = arr1[idx1];
        int candidate2 = arr2[idx2];
        if(candidate2>candidate1){
            arr1[nextPos] = candidate2;
            idx2--;
        }
        else{
            arr1[nextPos] = candidate1;
            idx1--;
        }
        nextPos--;
    }
    while(idx1>=0){
        arr1[nextPos] = arr1[idx1];
        nextPos--;
        idx1--;
    }
    while(idx2>=0){
        arr2[nextPos] = arr2[idx2];
        nextPos--;
        idx2--;
    }

}