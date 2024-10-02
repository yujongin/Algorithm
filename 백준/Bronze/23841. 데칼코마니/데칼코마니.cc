#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin >> n >> m;
    char pic[n][m];
    char result[n][m];
    
    for(int i = 0; i<n; i++){
        fill(result[i], result[i]+m, '.');
    }
    
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> pic[i][j];
            if(pic[i][j]!= '.'){
                result[i][j] = pic[i][j];
                result[i][m-1-j] = pic[i][j];
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << result[i][j];
        }
            cout << '\n';
    }
    
}