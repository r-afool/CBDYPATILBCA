#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m = n/2 + 1; //the total number of rows present in the first half
    for(int i = 1; i <= m; i++){
        //print 2*(m-i) spaces (green)
        for(int j = 0; j < 2*(m-i); j++){
            cout<<"  ";
        }
        //print i->1 (blue)
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }

        //print 2*i-3 spaces (red)
        for(int j = 0; j < 2*i-3; j++){
            cout<<"  ";
        }

        //print 1->i (brown)
        for(int j = 1; j <= i; j++){
            if(i==1){
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i = m-1; i >= 1; i--){
        //print 2*(m-i) spaces (green)
        for(int j = 0; j < 2*(m-i); j++){
            cout<<"  ";
        }
        //print i->1 (blue)
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }

        //print 2*i-3 spaces (red)
        for(int j = 0; j < 2*i-3; j++){
            cout<<"  ";
        }

        //print 1->i (brown)
        for(int j = 1; j <= i; j++){
            if(i==1){
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
