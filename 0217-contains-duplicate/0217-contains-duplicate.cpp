class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      std::unordered_map<int,int> m;
      for(int x:nums){
        m[x]++;
      }
      bool flag=false;
      for(auto item:m){
        if(item.second>=2){
            flag=true;
        }
      }
      return flag;

    }
};