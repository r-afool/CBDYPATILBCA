#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<" \t";
        }
        for(int j = i, k = 0; k < i; k++, j++){
            cout<<j<<"\t";
        }
        for(int j = 2*i-2; j>=i;  j--){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 0; j < n-i; j++){
            cout<<" \t";
        }
        for(int j = i, k = 0; k < i; k++, j++){
            cout<<j<<"\t";
        }
        for(int j = 2*i-2; j>=i;  j--){
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    
}
