#include <bits/stdc++.h>

using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    
    cin >> n >> k;
    
    int student[13] = {};
    
    while(n--){
        int s,y;
        cin >> s >> y;
        
        student[y + s * 6]++;
    }
    
    int count = 0;
    for(int i = 1; i < 13; i++){
        count += student[i] / k;
        if(student[i] % k != 0){
            count++;
        }
    }
    cout << count;
}