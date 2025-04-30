#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = (n+1)/2;
    for(int i = 1; i <= m; i++){
        for(int j = 0; j < m-i+1; j++){
            cout<<"*\t";
        }
        for(int j = 0; j < i-1; j++){
            cout<<"0\t";
        }
        for(int j = 0; j < i-2; j++){
            cout<<"0\t";
        }
        for(int j = 0; j < m-i+1; j++){
            if(i == 1 && j == 0) {continue;}
            cout<<"*\t";
        }
        cout<<endl;
    }
    for(int i = m-1; i >= 1; i--){
        for(int j = 0; j < m-i+1; j++){
            cout<<"*\t";
        }
        for(int j = 0; j < i-1; j++){
            cout<<"0\t";
        }
        for(int j = 0; j < i-2; j++){
            cout<<"0\t";
        }
        for(int j = 0; j < m-i+1; j++){
            if(i == 1 && j == 0) {continue;}
            cout<<"*\t";
        }
        cout<<endl;
    }

}