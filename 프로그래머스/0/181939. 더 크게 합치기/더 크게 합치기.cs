using System;

public class Solution {
    public int solution(int a, int b) {
        string s1 = a.ToString() + b.ToString();
        string s2 = b.ToString() + a.ToString();
        
        int answer = Int32.Parse(s1)>=Int32.Parse(s2)?Int32.Parse(s1):Int32.Parse(s2);
        return answer;
    }
}