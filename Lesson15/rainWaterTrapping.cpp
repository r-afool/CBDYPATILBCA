#include<iostream>
using namespace std;

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--){
        int n;
        cin>>n;
        int heights[1000];
        for(int i = 0; i < n; i++){
            cin>>heights[i];
        }
        int maxOnLeft[1000], maxOnRight[1000];
        //let me build both of these arrays;

        // let me build maxOnLeft
        maxOnLeft[0] = -1;
        int maxSoFarLeft = heights[0];
        for(int i = 1; i < n; i++){
            maxOnLeft[i] = maxSoFarLeft;
            maxSoFarLeft = max(maxSoFarLeft,heights[i]);
        }
        // let me build maxOnRight
        maxOnRight[n-1] = -1;
        int maxSoFarRight = heights[n-1];
        for(int i = n-2; i >= 0; i--){
            maxOnRight[i] = maxSoFarRight;
            maxSoFarRight = max(maxSoFarRight, heights[i]);
        }

        int totalWater = 0;
        for(int i = 0; i < n; i++){
            int levelOnCurTower = min(maxOnLeft[i],maxOnRight[i]);
            int waterOnCurTower = max(0,levelOnCurTower-heights[i]);       
            totalWater += waterOnCurTower;
        }
        cout<<totalWater<<endl;
    }
    return 0;
}