#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<vector<int>> arr(n, vector<int>(2)), dp(n, vector<int>(2));
        
        for(int j = 0; j< 2; j++){
            for(int i =0; i < n; i++){
                cin >> arr[i][j];
            }
        }
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<2; j++){
                int v = 0;
                if(i > 1) v = max(dp[i-2][0], dp[i-2][1]);
                if(i > 0) v = max(v, dp[i-1][1-j]);
                dp[i][j] = v+arr[i][j];
            }
        }
        
        cout << max(dp[n-1][0], dp[n-1][1])<<'\n';
    }
}