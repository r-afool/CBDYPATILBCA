#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int n;
    cin>>n;
    int m = n/2 + 1;
    for(int i = 1; i <= m; i++){
        //print m-i spaces    
        for(int j = 0; j < m-i; j++){
            cout<<" \t";
        }
        //print i stars;
        for(int j = 0; j < i; j++){
            cout<<"*\t";
        }
        //print i-1 stars;
        for(int j = 0; j < i-1; j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    for(int i = m-1; i >= 1; i--){
        //print m-i spaces    
        for(int j = 0; j < m-i; j++){
            cout<<" \t";
        }
        //print i stars;
        for(int j = 0; j < i; j++){
            cout<<"*\t";
        }
        //print i-1 stars;
        for(int j = 0; j < i-1; j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
}
