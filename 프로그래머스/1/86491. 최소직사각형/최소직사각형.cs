using System;

public class Solution {
    public int solution(int[,] sizes) {
        
        int maxSize = 0;
        foreach(int a in sizes){
            maxSize = Math.Max(maxSize,a);
        }
        
        int maxSize2 = 0;
        for(int i = 0; i < sizes.GetLength(0); i++){
            int a = Math.Min(sizes[i,0],sizes[i,1]);
            maxSize2 = Math.Max(maxSize2,a);
        }
        
        
        
        int answer = maxSize * maxSize2;
        return answer;
    }
}