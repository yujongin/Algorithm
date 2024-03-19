using System;
using System.Collections.Generic;
public class Solution {
    public string[] solution(string[] players, string[] callings) {
        Dictionary<string,int> playerDic = new Dictionary<string,int>(); 
        int index = 0;
        foreach(string a in players){
            playerDic.Add(a,index);

            index++;
        }
        
        for(int i = 0; i < callings.Length; i++){
            int n = playerDic[callings[i]];
            string temp = players[n-1];
            players[n-1] = callings[i];
            playerDic[callings[i]] = n-1;
            players[n] = temp;
            playerDic[temp] = n;
        }
        return players;
    }
}