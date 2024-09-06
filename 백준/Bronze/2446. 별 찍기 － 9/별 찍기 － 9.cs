using System;


class Solution {
    static void Main(String[] args) {
        int a = Int32.Parse(Console.ReadLine())*2-1;
        int addValue =0;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < a + addValue; j++){
                if(j<Math.Abs(addValue)){
                  Console.Write(" ");
                }
                else{
                   Console.Write("*");
                }
            }
            if(i<a/2){
                addValue--;
            }else{
                addValue++;
          }
            Console.WriteLine("");
        }
    }
}