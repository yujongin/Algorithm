using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] park, string[] routes) {
        string[,] map = new string[park.Length,park[0].Length];
        int[] currentPos = new int[2];
        List<string> paths = new List<string>();
        for(int i = 0; i<park.Length; i++){
            for(int j = 0; j<park[i].Length; j++){
                string s = park[i][j].ToString();
                map[i,j] = s;
                if(s == "S"){
                    currentPos = new int[2]{i,j};
                }
            }
        }        
        
        for(int i = 0; i<routes.Length; i++){
            string op = routes[i].Split(" ")[0];
            int n = Int32.Parse(routes[i].Split(" ")[1]);
            int a = op=="E"||op=="S"? 1 : -1;
            bool isX = false;
            if(op == "E"||op == "W"){
                int destination = a * n + currentPos[1]; 
                if(destination >= 0 && destination < park[0].Length){
                    for(int j = 1; j <= n; j++){
                        if("X"==map[currentPos[0],currentPos[1]+j*a]){
                            isX = true;   
                        }
                    }
                    if(!isX){
                        map[currentPos[0],currentPos[1]] = "O";
                        map[currentPos[0],destination] = "S";
                        currentPos[1] = destination;
                    }
                }
            }
            else{
                int destination = a * n + currentPos[0]; 
                if(destination >= 0 && destination < park.Length){
                    for(int j = 1; j <= n; j++){
                        if("X"==map[currentPos[0]+j*a,currentPos[1]]){
                            isX = true;   
                        }
                    }
                    if(!isX){
                        map[currentPos[0],currentPos[1]] = "O";
                        map[destination,currentPos[1]] = "S";
                        currentPos[0] = destination;
                    }
                }
            }
        }
        int[] answer = currentPos;
        return answer;
    }
}