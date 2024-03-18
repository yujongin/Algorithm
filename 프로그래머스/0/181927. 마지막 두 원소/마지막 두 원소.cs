using System;

public class Solution {
    public int[] solution(int[] num_list) {
        int n = num_list.Length-1;
        int a = num_list[n]>num_list[n-1]?num_list[n]-num_list[n-1]:num_list[n]*2;
        Array.Resize(ref num_list, num_list.Length + 1);
        num_list[num_list.Length - 1] = a;

        return num_list;
    }
}