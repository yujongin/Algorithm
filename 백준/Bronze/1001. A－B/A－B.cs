using System;

class Program{
    static void Main(string[] args){
        string numberText = Console.ReadLine();
        
        string[] numbers = numberText.Split(" ");
        int A = Int32.Parse(numbers[0]);
        int B = Int32.Parse(numbers[1]);
        
        Console.WriteLine(A-B);
    }
}