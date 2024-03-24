using System;
using System.Linq;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] keymap, string[] targets) {
        Dictionary<string,int> keyCount = new Dictionary<string, int>();
        List<int> result = new List<int>();
        for(int i = 0; i<targets.Length; i++){
            int count =0;
            for(int j = 0; j<targets[i].Length; j++){
                //딕셔너리에 값이 없으면 찾아서 추가
                if(!keyCount.Keys.Contains(targets[i][j].ToString())){
                    int minCount = -1;
                    for(int k=0; k<keymap.Length; k++){
                        if(keymap[k].Contains(targets[i][j].ToString())){
                            int index = keymap[k].IndexOf(targets[i][j].ToString());
                            if(minCount==-1||minCount > index){
                                minCount = index;
                            }
                        }
                    }
                    keyCount.Add(targets[i][j].ToString(),minCount);
                    if(minCount == -1){
                        result.Add(minCount);
                        break;
                    }
                    else{
                        count += minCount + 1;
                        if(j==targets[i].Length - 1){
                            result.Add(count);
                        }
                    }
                }else{
                    if(keyCount[targets[i][j].ToString()]==-1){
                        result.Add(-1);
                        break;
                    }else{
                        count += keyCount[targets[i][j].ToString()] + 1;
                        if(j==targets[i].Length - 1){
                            result.Add(count);
                        }
                    }
                    
                }
            }
        }
        
        int[] answer = result.ToArray();
        
        return answer;
    }
}