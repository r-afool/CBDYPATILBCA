#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int curBit = 1;
    int setCount = 0;
    while(curBit <= n){
        if(n&curBit){
            setCount++;
        }
        // curBit <<= 1;
        curBit = curBit<<1;
    }
    cout<<setCount;
}