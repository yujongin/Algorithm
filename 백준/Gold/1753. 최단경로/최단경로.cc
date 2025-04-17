#include<bits/stdc++.h>
using namespace std;

#define INF 987654321

int V,E,Start;
int Dist[20005];
vector<pair<int,int>> Vertex[20005];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> V >> E >> Start;
    for(int i = 0; i < E; i++){
        int a,b,c; cin>>a>>b>>c;
        Vertex[a].push_back(make_pair(b,c));
    }
    
    for(int i = 1; i<=V; i++) Dist[i] = INF;
    
    priority_queue<pair<int,int>> PQ;
    PQ.push(make_pair(0,Start));
    Dist[Start] = 0;
    
    while(PQ.empty() == 0){
        int Cost = -PQ.top().first;
        int Cur = PQ.top().second;
        PQ.pop();
        
        for(int i = 0; i<Vertex[Cur].size(); i++){
            int Next = Vertex[Cur][i].first;
            int nCost = Vertex[Cur][i].second;
            
            if(Dist[Next] > Cost + nCost){
                Dist[Next] = Cost + nCost;
                PQ.push(make_pair(-Dist[Next],Next));
            }
        }
    }
    
    for(int i = 1; i<=V; i++){
        if(Dist[i] == INF) cout << "INF" << '\n';
        else cout << Dist[i] << '\n';
    }
}