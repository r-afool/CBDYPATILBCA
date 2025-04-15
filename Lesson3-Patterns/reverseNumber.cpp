#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while(n != 0){
        int curOnesDigit = n%10;
        // rev = rev*10;
        // rev = rev+curOnesDigit;
        rev = rev*10 + curOnesDigit;
        n = n/10;
    }
    cout<<rev;
}