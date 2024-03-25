using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int solution(string[] spell, string[] dic) {
        int answer = 2;
        List<string> sList = new List<string>();
        for(int i = 0; i < dic.Length; i++){
            if(dic[i].Length == spell.Length){
                sList.Add(dic[i]);
            }
        }
        
        for(int i = 0; i<sList.Count; i++){
            int count = 0;
            for(int j = 0; j<spell.Length; j++){
                if(sList[i].Contains(spell[j])){
                    count++;
                }
            }
            if(count == spell.Length){
                answer = 1;
            }
        }

        return answer;
    }
}