#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 1;
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            if(i%2 == 0 && j!=1 && j!=i){
                cout<<0<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        cout<<endl;
    }
}