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
                }
            }
            else{
                left=right;
            }
        }
        return total;
    }
};