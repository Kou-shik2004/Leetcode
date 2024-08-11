class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res=[]
        nums.sort() #to use two sum 2
        for i,num in enumerate(nums):
            if i>0 and num==nums[i-1]: #eliminates duplicates
                continue
            l,r=i+1,len(nums)-1
            while(l<r):
                threesum=num+nums[l]+nums[r] 
                if threesum<0:
                    l+=1
                elif threesum>0:
                    r-=1
                else:
                    res.append([num,nums[l],nums[r]])
                    l+=1 #same sum not to be repeated
                    while nums[l]==nums[l-1] and l<r: #to avoid duplicate left pointers
                        l+=1
        return res