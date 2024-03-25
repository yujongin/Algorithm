using System;

public class Solution {
    public bool solution(int x) {
        string stringX = x.ToString();
        int sum = 0;
        for(int i = 0; i<stringX.Length; i++){
            sum += int.Parse(stringX[i].ToString());
        }
        
        bool answer = x%sum==0;
        return answer;
    }
}