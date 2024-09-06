using System;

class Solution {
    static void Main(String[] args) {
        int a = Int32.Parse(Console.ReadLine());
        int addValue = 1;
        for(int i = 0; i < a*2-1; i++){
            for(int j = 0; j < a*2; j++){
                    if(j<addValue){
                        Console.Write("*");
                    }
                    else if(j>a*2-(addValue+1)){
                        Console.Write("*");
                    }
                    else{
                        Console.Write(" ");
                    }
            }
            if(i<a-1)
                addValue++;
            if(i>=a-1)
                addValue--;
            
            Console.WriteLine("");
        }
        
    }
}