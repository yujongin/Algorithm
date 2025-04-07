#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,x,y = 0;
    cin >> n;
    
    vector<pair<int,int>> lineList;
    
    while(n--){
        cin >> x >> y;
        lineList.push_back({x,1});
        lineList.push_back({y,-1});
                
    }
    sort(lineList.begin(), lineList.end());
        
    int cnt = 0;
    int tot = 0;
    int loc = -1e9;
    
    for(auto line : lineList){
        if(cnt>0) tot += (line.first - loc);
        loc = line.first;
        cnt += line.second;
    }
    cout<<tot;
    
}