class Solution {
public:
    //intuitive approach
    //1.sort the array
    //2.max prod last two elements min prod first two elements
    //O(nlogn)

    // int maxProductDifference(vector<int>& nums) {
    //     std::sort(nums.begin(),nums.end());
    //     return (nums[nums.size()-1]*nums[nums.size()-2])-(nums[0]*nums[1]);
    // }

    //better solution
    //O(n)
    //1.two max and two min variables
    //2.check each element with four of this variables


    int maxProductDifference(vector<int>& nums) {
        int max1=0;
        int max2=0;
        int min1=INT_MAX;
        int min2=INT_MAX;

        for(int x:nums){
            if(x>max2){
                if(x>max1){
                    //if ele max of both replace max1 with max2 and max1 with curr ele 
                    max2=max1;
                    max1=x;
                }
                else{
                    max2=x;
                }
            }
            if(x<min2){
                if(x<min1){
                    min2=min1;
                    min1=x;
                }
                else{
                    min2=x;
                }
            }
        }
        return (max1*max2)-(min1*min2);
    }



};