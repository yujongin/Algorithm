#include<bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[101];
int vis[101][101];

int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        cin >> board[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        fill(vis[i], vis[i]+m, -1);
    }
    
    queue<pair<int,int>> Q;
    vis[0][0] = 0;
    Q.push({0,0});
    
    while(!Q.empty())
    {
        auto cur = Q.front();Q.pop();
        for(int i = 0; i < 4; i++)
        {
            int dirX = cur.X + dx[i];
            int dirY = cur.Y + dy[i];
            if(dirX < 0 || dirX >= n || dirY < 0 || dirY >= m) continue;
            if(vis[dirX][dirY] >= 0 || board[dirX][dirY] != '1') continue;
            
            vis[dirX][dirY] = vis[cur.X][cur.Y] + 1;
            Q.push({dirX,dirY});
        }
    }
    cout << vis[n-1][m-1] + 1;
}