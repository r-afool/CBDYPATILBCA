#include<iostream>
using namespace std;
int main(){
    int initial, final, step;
    // cin>>initial;
    // cin>>final;
    // cin>>step;
    cin>>initial>>final>>step;
    for(int curFahr = initial; curFahr <= final; curFahr = curFahr + step){
        cout<<curFahr<<"    "<<(5*(curFahr-32))/9<<endl;
        // cout<<curFahr;
        // cout<<"    ";
        // cout<<(5*(curFahr-32))/9;
        // cout<<endl;

    }
}