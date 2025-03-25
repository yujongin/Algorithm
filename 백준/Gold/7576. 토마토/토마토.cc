#include<bits/stdc++.h>
using namespace std;

int box[1002][1002];
int tomatos[1002][1002];

int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> m >> n;
    
                
    queue<pair<int,int>> Q;
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> box[i][j];
            
            if(box[i][j] == 1)
                Q.push({i,j});
                
            if(box[i][j] == 0)
                tomatos[i][j] = -1;           
        }
    }
    
            
    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir =0; dir<4; dir++){
           int nx = cur.first + dx[dir];
           int ny = cur.second + dy[dir];
           
           if(nx<0 || nx>=n|| ny<0|| ny>=m) continue;
           if(tomatos[nx][ny] >= 0) continue;
           tomatos[nx][ny] = tomatos[cur.first][cur.second] + 1;
           Q.push({nx,ny});
        }
    }
    
    int ans = 0;
    
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(tomatos[i][j]==-1){
                cout << -1;
                return 0;
            }
            
            ans = max(ans,tomatos[i][j]);
        }
    }

    cout << ans;
    
}