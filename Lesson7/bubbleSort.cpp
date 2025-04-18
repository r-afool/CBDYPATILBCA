#include<iostream> 
using namespace std;
int main() {
    int n; 
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        bool haveSwapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j+1] < arr[j]){
                haveSwapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!haveSwapped){ break;}
    }
}