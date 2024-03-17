using System;

public class Solution {
    public string solution(string my_string, int k) {
        string answer = "";
        for(int i = 1; i<=k; i++){
            answer = answer + my_string;    
        }
        return answer;
    }
}