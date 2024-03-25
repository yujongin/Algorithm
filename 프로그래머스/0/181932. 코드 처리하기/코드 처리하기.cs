using System;

public class Solution {
    public string solution(string code) {
        int mode = 0;
        string ret = "";
        for(int idx = 0; idx<code.Length; idx++){
            if(code[idx].ToString()=="1"){
                mode = mode==1?0:1;
            }else{
                if(mode == 1){
                    if(idx%2 ==1){
                        ret = ret+code[idx].ToString();
                    }
                }else{
                    if(idx%2 ==0){
                        ret = ret+code[idx].ToString();
                    }
                }

            }

            
        }
        if(ret==""){
            ret = "EMPTY";
        }
        return ret.ToString();
    }
}