using System;

public class Solution {
    public int solution(int a, int b) {
        int s = Int32.Parse(a.ToString()+b.ToString());
        int s2 = 2 * a * b;
        int answer = Math.Max(s,s2);
        return answer;
    }
}