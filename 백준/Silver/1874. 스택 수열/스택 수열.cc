#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    stack<int> st;
    int cnt = 1;
    
    string ans;
    while(n--){
        int a;
        cin >> a;
        
        while(cnt <= a){
            st.push(cnt++);
            ans += "+\n";
        }
        if(a != st.top()){
            cout << "NO"; 
            return 0;
        }
        
        st.pop();
        ans += "-\n";
    }
    
    cout << ans;
        
}   