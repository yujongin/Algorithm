using System;

public class Solution {
    public int solution(int[,] board) {
        for(int i = 0; i<board.GetLength(0); i++){
            for(int j = 0; j<board.GetLength(1); j++){
                if(board[i,j] == 1){
                    if(j>0) board[i,j-1] = board[i,j-1]==1 ? 1 : 2;
                    if(j<board.GetLength(1)-1) board[i,j+1] = board[i,j+1] == 1? 1 : 2;
                    if(i>0){
                        board[i-1,j] = board[i-1,j]==1? 1:2;
                        if(j>0) board[i-1,j-1] = board[i-1,j-1]==1? 1:2;
                        if(j<board.GetLength(1)-1) board[i-1,j+1] =board[i-1,j+1]==1? 1: 2;
                    }
                    if(i<board.GetLength(0)-1){
                        board[i+1,j] = board[i+1,j]==1? 1:2;
                        if(j>0) board[i+1,j-1] = board[i+1,j-1]==1? 1:2;
                        if(j<board.GetLength(1)-1) board[i+1,j+1] = board[i+1,j+1]==1? 1:2;
                    }
                }
            }
        }
        
        
        int answer = 0;
        foreach(int a in board){
            if(a ==0){
                answer++;
            }
        }
        
        return answer;
    }
}