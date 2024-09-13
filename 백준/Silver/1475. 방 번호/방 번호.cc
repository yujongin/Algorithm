#include<bits/stdc++.h>
using namespace std;

int n[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int roomNum, ans = 0;
    cin >> roomNum;
    
    while(roomNum){
       n[roomNum%10]++;
       roomNum /= 10;
    }
    
    for(int i = 0; i < 10; i++){
        if(i == 6 ||i == 9) continue;
        
        ans = max(ans,n[i]);
    } 
    
    ans = max(ans,(n[6] + n[9] + 1) / 2);
    cout << ans;
}