class Solution {
public:
     int minCost(string colors, vector<int>& neededTime) {
        int total=0;
        int left=0;
        for(int right=1;right<colors.length();right++){
            if(colors[left]==colors[right]){
                if(neededTime[left]<neededTime[right]){
                    total+=neededTime[left];
                    left=right; 
                }
                else{
                    total+=neededTime[right];
                    //the left pointer stays on the same position
                }
            }
            else{
                left=right;
            }
        }
        return total;
    }

    // int minCost(string s, vector<int>& cost) 
    // {
    //     int res = 0;
    //     for(int i = 1; i < s.size(); i++)
    //     {
    //         if(s[i] == s[i - 1])
    //         {
    //             res += min(cost[i], cost[i - 1]);
    //             cost[i] = max(cost[i], cost[i - 1]); 

    //         }     
    //     }
        
    //     return res;
        
    // }
   
};