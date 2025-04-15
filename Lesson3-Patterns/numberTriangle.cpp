#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        //print n-i spaces
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for(int j = 0, num = i; j < i; j++, num++){
            cout<<num;
        }
        for(int j = 0, num = 2*i-2; j < i-1; j++,num--){
            cout<<num;
        }
        cout<<endl;
    }
}