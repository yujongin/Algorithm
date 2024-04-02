using System;

public class Solution {
    public int solution(int[] num_list) {
        string odd = "";
        string even = "";
        for(int i = 0; i < num_list.Length; i++){
            if(num_list[i]% 2 == 0){
                odd += num_list[i].ToString();
            }else{
                even += num_list[i].ToString();
            }
        }
        
        int answer = Int32.Parse(odd)+Int32.Parse(even);
        return answer;
    }
}