#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    for(int i = 1; i <= n+1; i++){
        //print i-1 spaces;
        for(int j = 0; j < i-1; j++){
            cout<<"  ";
        }

        //print numbers from sNumber to 0
        for(int j = n+1-i; j>=0; j--){
            cout<<j<<" ";
        }

        //print numbers from 1 to sNumber
        for(int j = 1; j<= (n+1-i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i = n; i >= 1; i--){
        //print i-1 spaces;
        for(int j = 0; j < i-1; j++){
            cout<<"  ";
        }

        //print numbers from sNumber to 0
        for(int j = n+1-i; j>=0; j--){
            cout<<j<<" ";
        }

        //print numbers from 1 to sNumber
        for(int j = 1; j<= (n+1-i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
