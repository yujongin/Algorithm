#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int count;
    cin >> count;
    
    while(count--){
        string testCase;
        cin >> testCase;
        
        list<char> L;
        list<char>::iterator cursor = L.end();
        
        for(char a : testCase){
            if(a == '<'){
                if(cursor!=L.begin()) cursor--;
            }
            else if(a == '>'){
                if(cursor!=L.end()) cursor++;
            }
            else if(a=='-'){
                if(cursor!=L.begin()){
                    cursor--;
                    cursor = L.erase(cursor);
                }
            }
            else{
                L.insert(cursor, a);
            }
        }
        for(auto l : L){
            cout << l;
        }
        cout << '\n';
    }
}