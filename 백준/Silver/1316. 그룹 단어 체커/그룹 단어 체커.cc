#include <bits/stdc++.h>

using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    int result = 0;
    while(n--)
    {
        int a[26];
        bool isGroup = true;
        fill(a,a+26,0);
        string s;
        cin >> s;
        int len = 0;
        for(char c : s){

            if(a[c-'a']==0){
                a[c-'a']++;
            }
            else{
                if(s[len-1]!=c){
                  isGroup =false;
                  break;  
                } 
            }
            len ++;
        }
        
        if(isGroup) result++;
        
    }
    
    cout << result;
}