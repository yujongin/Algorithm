#include <bits/stdc++.h>

using namespace std;

int a[1000001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        for(int i = 0; i<n; i++) cin >> a[i];
        int maxVal = a[n-1];
        long long ans = 0;
        for(int i = n - 2; i>=0; i--){
            if(a[i]>maxVal) maxVal = a[i];
            ans += maxVal - a[i];
        }
        cout << ans << '\n';
    }
    
}