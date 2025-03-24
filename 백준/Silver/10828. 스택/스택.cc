#include <bits/stdc++.h>

using namespace std;
int myStack[10005];
int pos = 0;

void Push(int x){
    myStack[pos++] = x;
}

void Pop(){
    if(pos == 0){
        cout << -1 << '\n';
        return;
    }
    cout << myStack[pos - 1] << '\n';
    pos--;
}

void Size(){
    cout << pos << '\n';
}

void Empty(){
    cout << (int)(pos == 0) << '\n';
}

void Top(){
    if(pos == 0){
        cout << -1 << '\n';
        return;
    }
    cout << myStack[pos-1] << '\n';
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;   
    
    while(n--){
        string c;
        cin >> c;
        
        if(c == "push"){
            int x;
            cin >> x;
            Push(x);
        }
        else if(c == "pop"){
            Pop();
        }
        else if(c == "size"){
            Size();
        }
        else if(c == "empty"){
            Empty();
        }
        else{
            Top();
        }
    }

}