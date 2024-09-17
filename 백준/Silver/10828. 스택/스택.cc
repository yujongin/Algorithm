#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX]; 
int pos = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int count;
    cin >> count;
    
    while(count--){
        string op;
        cin >> op;
        
        if(op == "push"){
            int a;
            cin >> a;
            dat[pos++] = a;
        }
        else if(op == "pop"){
            if(pos != 0) {
                cout << dat[pos-1] << '\n';
                pos--;
            }
            else {cout << -1 << '\n';}
        }
        else if(op == "size"){
            cout << pos << '\n';  
        }
        else if(op == "empty"){
            if(pos == 0) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(op == "top")
        {
            if(pos != 0) {
                cout << dat[pos-1] << '\n';
            }
            else {cout << -1 << '\n';}
        }
    }
}