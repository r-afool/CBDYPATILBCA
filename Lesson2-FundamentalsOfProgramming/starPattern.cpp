#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<'*';
        }
        //my current line is done printing
        cout<<"\n";
    }
    return 0;
}