using System;

public class Solution {
    public string solution(string code) {
        bool mode = false;
        string ret = "";
        for(int idx = 0; idx<code.Length; idx++){
            if(code[idx].ToString()=="1"){
                mode = !mode;
            }else{
                if(mode&&idx%2 ==1){
                    ret = ret+code[idx].ToString();
                }else if(!mode&&idx%2 ==0){
                    ret = ret+code[idx].ToString();
                }
            }
        }
        if(ret==""){
            ret = "EMPTY";
        }
        return ret.ToString();
    }
}