using System;

class Program{
    static void Main(String[] args){
        int a = Int32.Parse(Console.ReadLine());
        
        
        for(int i = 0; i< a; i++){
            for(int j = 0; j < a; j++){
                if(j<=i)
                    Console.Write("*");    
            }
            Console.Write("\n");
        }
    }
}