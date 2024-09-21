#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    queue<int> q;
    for(int i = 1; i<=n; i++){
        q.push(i);
    }   
    int a =0;
    while(!q.empty()){
        a = q.back();
        q.pop();
        if(q.empty()){
            cout << a;
            return 0;
        }
        q.push(q.front());
        q.pop();
    }
}