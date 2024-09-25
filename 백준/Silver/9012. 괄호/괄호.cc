#include <bits/stdc++.h>

using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        bool isVps = true;
        stack<char> vps;
        for(char c : s){
            if(c == '('){
                vps.push(c);
            }
            else{
                if(vps.empty()){
                  cout << "NO" << '\n';
                  isVps = false;
                  break;
                }
                vps.pop();    
            }
        }
        
        if(isVps){
            if(vps.empty()){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << '\n';
            }
        }
        
    }

}