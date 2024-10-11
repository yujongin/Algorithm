#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[1001][1001];
int vis[1001][1001];

int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> m >> n;
    
    queue<pair<int,int>> Q;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) 
                Q.push({i,j});
            if(board[i][j] == 0)
                vis[i][j] = -1;
        }
    }
    
    while(!Q.empty()){
        auto cur = Q.front();Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
            if(vis[nx][ny] >= 0) continue;
            
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == -1){
                cout << -1;
                return 0;                
            }
            ans = max(ans,vis[i][j]);
        }
    }
    cout << ans;
}