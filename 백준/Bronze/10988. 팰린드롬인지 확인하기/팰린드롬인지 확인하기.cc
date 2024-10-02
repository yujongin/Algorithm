#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int half = (int)s.length() / 2;
    bool isPal = true;
    for(int i = 0; i < half; i++){
        if(s[i]!=s[(int)s.length()-1-i]){
            isPal = false;
        }
    }
    
    cout << isPal;
}