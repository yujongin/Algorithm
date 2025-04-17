#include<bits/stdc++.h>
using namespace std;

int Arr[1005];
int DP[1005];
int R_DP[1005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    for(int i = 1; i <= N; i++){
        cin >> Arr[i];
    }
    
    for(int i = 1; i<=N; i++){
        DP[i] = 1;
        for(int j = 1; j <= i; j++){
            if(Arr[j] < Arr[i] && DP[i] < DP[j] + 1){
                DP[i] = DP[j] + 1;
            }
        }
    }
    
    for(int i = N; i>=1; i--){
        R_DP[i] = 1;
        for(int j = N; j>=i; j--){
            if(Arr[i] > Arr[j] && R_DP[j] + 1 > R_DP[i]){
                R_DP[i] = R_DP[j] + 1;
            }
        }
    }
    
    int Answer = 0;
    
    for(int i = 0; i<=N; i++){
        if(Answer < DP[i] + R_DP[i] - 1) Answer = DP[i] + R_DP[i] - 1;
    }
    
    cout << Answer << '\n';
    return 0;
}