using System;

public class Example
{
    public static void Main()
    {
        String[] input;

        Console.Clear();
        input = Console.ReadLine().Split(' ');

        String s1 = input[0];
        int a = Int32.Parse(input[1]);
        String s2 ="";
        for(int i = 0; i < a; i++){
            s2 += s1;
        }
        Console.WriteLine(s2);

    }
}