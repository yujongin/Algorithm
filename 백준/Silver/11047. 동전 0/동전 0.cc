#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k;
    int a[15];
    
    cin >> n >> k;
    for(int i = 0; i<k; i++){
        cin >> a[i];
    }
    
    int ans = 0;
    for(int i = n-1; i >=0; i--){
        ans += k/a[i];
        k %= a[i];
    }
    
    cout << ans;
        
}