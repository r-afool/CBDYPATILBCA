#include<iostream>
using namespace std;

int main()
{
    int binary;
    cin>>binary;
    int decimal = 0, power = 1;
    while(binary > 0){
        int curBit = binary%10;
        binary /=10;
        decimal += curBit * power;
        power*=2;
    }
    cout<<decimal;
    return 0;
}