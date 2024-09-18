#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,v,a[201] = {};
    cin >> n;
    
    while(n--){
        int b;
        cin >> b;
        
        a[b+100]++;
    }
    
    cin >> v;
    cout << a[v+100];
}