using System;

public class Example
{
    public static void Main()
    {
        String s;
        String s2 = "";
        Console.Clear();
        s = Console.ReadLine();
        for(int i = 0; i < s.Length; i++){
            s2 += char.IsUpper(s[i])?char.ToLower(s[i]):char.ToUpper(s[i]);
        }
        Console.WriteLine(s2);
    }
}