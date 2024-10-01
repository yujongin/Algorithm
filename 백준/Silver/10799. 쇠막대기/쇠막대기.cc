#include<bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int stickCount = 0;
    int len = 0;
    int result = 0;
    stack<char>st;
    string s;
    cin >> s;
    for(char c : s)
    {
        if(c == '(')
        {
            if(!st.empty()){
                if(s[len-1]=='(')
                {
                    stickCount++;
                    result++;
                }
            }
            st.push(c);
        }
        else
        {
            if(!st.empty()){
                if(s[len-1]=='(')
                {
                    result += stickCount;
                }
                else if(s[len-1]==')')
                {
                    stickCount--;    
                }
                st.pop();
            }
        }
        len++;
    }
    cout << result;
}