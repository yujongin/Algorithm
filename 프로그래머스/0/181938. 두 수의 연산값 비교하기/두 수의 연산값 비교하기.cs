using System;

public class Solution {
    public int solution(int a, int b) {
        int s = Int32.Parse(a.ToString()+b.ToString());
        int s2 = 2 * a * b;
        int answer = s>=s2?s:s2;
        return answer;
    }
}