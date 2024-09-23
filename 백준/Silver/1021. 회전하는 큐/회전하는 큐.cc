#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    
    cin >> n >> m;
    
    deque<int> dq;
    int count = 0;
    for(int i = 1; i <= n; i++){
        dq.push_back(i);
    }
    
    while(m--){
        int a;
        cin >> a;
        
        int idx = find(dq.begin(),dq.end(), a) - dq.begin();
        while(dq.front() != a){
            if(idx < (int)dq.size() - idx){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else{
                dq.push_front(dq.back());
                dq.pop_back();
            }
            count++;
        }
        dq.pop_front();
    }
    cout << count;
}