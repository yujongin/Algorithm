#include<bits/stdc++.h>
using namespace std;

int n,k,len = 0 ;
vector<int> v;

int nxt[5001];
int pre[5001];

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++){
        pre[i] = (i == 1) ? n : i - 1;
        nxt[i] = (i == n) ? 1 : i + 1;
        len++;
    }

    int i = 1;
    
    for(int cur = 1; len != 0; cur = nxt[cur]){
        if(i == k){
            v.push_back(cur);
            pre[nxt[cur]] = pre[cur];
            nxt[pre[cur]] = nxt[cur];
            len--;
            i = 1;
        }else{
            i++;
        }
    }
    
    cout << '<';
    for(int i = 0; i < (int)v.size(); i++){
        cout << v[i];
        if(i < (int)v.size()-1){
            cout<<", ";
        }
    }
    cout << '>';
}