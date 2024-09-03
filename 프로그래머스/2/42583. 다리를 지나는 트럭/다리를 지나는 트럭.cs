using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        Queue<int> bridge = new Queue<int>();
        int weightSum = 0;
        int time = 0;
        int truckCount = 0;
        
        
        while(true){
            if(truckCount == truck_weights.Length) break;
            
            if(weightSum+truck_weights[truckCount] <= weight){
                bridge.Enqueue(truck_weights[truckCount]);
                weightSum += truck_weights[truckCount];
                truckCount++;
            }else{
                bridge.Enqueue(0);
            }
            
            if(bridge.Count == bridge_length){
                weightSum -= bridge.Dequeue();
            }
            
            time ++;         
        }

        return time + bridge_length;
    }
}