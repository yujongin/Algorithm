#include<bits/stdc++.h>
using namespace std;

int n[10];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    cin >> a >> b >> c;
    int x = a * b * c;
    for(char v : to_string(x)){
        n[v - '0']++;
    }
    for(int q : n){
        cout << q << '\n';
    }
}