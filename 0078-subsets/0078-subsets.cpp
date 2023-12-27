class Solution {
public:

    //recursive solution
    
    void total_subsets(vector<int> num_list,vector<vector<int>>& ans,vector<int> curr={},int n=0){
        if(n==num_list.size()){
            ans.push_back(curr);
            return ;
        }
        curr.push_back(num_list[n]);
        total_subsets(num_list,ans,curr,n+1); //include a number
        curr.pop_back();//to backtrack
        total_subsets(num_list,ans,curr,n+1) ; //ignore it
    }

    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
         total_subsets(nums,ans);
         return ans;
    }
};