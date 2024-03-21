using System;
public class Solution {
    public int[] solution(string[] wallpaper) {
        int minX = -1;
        int maxX = -1;
        int minY = -1;
        int maxY = -1;
        for(int i = 0; i < wallpaper.Length; i++){
            for(int j =0; j<wallpaper[i].Length; j++){
                if(wallpaper[i][j].ToString() == "#"){
                    if(minX == -1)minX = i;
                    if(maxX < i)maxX = i;
                    if(minY==-1 || minY>j) minY = j;
                    if(maxY < j)maxY = j;
                }
            }
        }
        
        return new int[4]{minX,minY,maxX+1,maxY+1};
    }
}