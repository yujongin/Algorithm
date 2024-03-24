using System;

public class Solution {
    public int solution(int left, int right) {
        int sum = 0;
        for(int i = left; i<=right; i++){
            if(Math.Floor(Math.Sqrt(i)) == Math.Sqrt(i)){
                sum-=i;
            }else{
                sum+=i;
            }
        }
        return sum;
    }
}