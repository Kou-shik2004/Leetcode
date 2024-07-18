class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // num to its frequency 
        unordered_map <int,int> map;
        for(int x:nums){
            map[x]++;
        }
        //map 1:2 times 2:2 times 3:1 time 4:1time 5:1 time
        //array index is no of count value is array of elements
   //[1,1,1,2,2,3]   ans arr  0    1      2    3  4  5 6
                            //0 {3,4,5} {1,2} {} {} {} {}
        vector<vector<int>> ans(nums.size()+1);
        for(auto it=map.begin();it!=map.end();it++){
            ans[it->second].push_back(it->first);
        }
       vector<int> fin;
       for(int i=nums.size();i>=0;i--){
            if(fin.size()>=k){
              break;
            }
            if(!ans[i].empty()){
                fin.insert(fin.end(),ans[i].begin(),ans[i].end());
            }
       }
       return fin;
    }
};