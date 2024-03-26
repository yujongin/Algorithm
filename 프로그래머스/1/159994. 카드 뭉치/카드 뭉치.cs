using System;
using System.Collections.Generic;
using System.Linq;
public class Solution {
    public string solution(string[] cards1, string[] cards2, string[] goal) {
        int index1 = 0;
        int index2 = 0;
        string answer = "";
        for(int i = 0; i<goal.Length; i++){
            if(index1<cards1.Length&&cards1[index1]==goal[i]){
                answer = "Yes";
                index1++;
            }else if(index2<cards2.Length&&cards2[index2]==goal[i]){
                answer = "Yes";
                index2++;
            }else{
                answer = "No";
                break;
            }
        }
        

        return answer;
    }
}