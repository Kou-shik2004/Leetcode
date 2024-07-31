
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        out = [1] * len(nums)
        pre = 1
        for i in range(len(nums)):
            out[i] = pre
            pre *= nums[i]
        post = 1
        for i in range(len(nums) - 1, -1, -1):
            out[i] *= post
            post *= nums[i]
        return out
