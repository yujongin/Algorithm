#include<bits/stdc++.h>
using namespace std;

int board[51][51];
bool vis[51][51];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int t,m,n,k;
int x,y;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    while(t--)
    {   
        cin >> m >> n >> k;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                board[i][j] = 0;
                vis[i][j] = 0;
            }
        }
        
        queue<pair<int,int>> Q;
        for(int i=0; i<k; i++){
            cin >> x >> y;
            board[y][x] = 1;
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==1 && !vis[i][j]){
                    Q.push({i,j});
                    vis[i][j] = true;
                    ans++;
                    while(!Q.empty()){
                        auto cur = Q.front();
                        Q.pop();
                        
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.first + dx[dir];
                            int ny = cur.second + dy[dir];
                        
                            if(nx<0||nx>=n || ny<0 || ny>=m)continue;
                            if(board[nx][ny]==0||vis[nx][ny] == 1) continue;
                            
                            vis[nx][ny] = 1;
                            Q.push({nx,ny});
                        }
                    }
                }
            }
        }

        
        cout<<ans<<'\n';
    }
    return 0;
    
}