using System;
using System.Linq;
public class Solution {
    public int solution(int n, int m, int[] section) {
        int count = 0;
        int nextNum = 0;
        for(int i = 0; i<section.Length; i++){
            if(nextNum<section[i]){
                count++;
                nextNum = section[i] + m - 1;
            }
        }
        return count;
    }
}