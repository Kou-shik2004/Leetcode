class Solution:
    def dailyTemperatures(self, temp: List[int]) -> List[int]:
        #O(n^2)
        # n=len(temp)
        # ans = [0] * n
        # for i in range(n):
        #     for j in range(i+1,n):
        #         if temp[i]<temp[j]:
        #             ans[i]=j-i
        #             break
        # return ans
        n=len(temp)
        ans=[0]*n
        stack=[] # temp value:index as a pair
        for index,temp in enumerate(temp):
            while(stack and temp>stack[-1][0]): #NON EMPTY AND TEMP GREATER THAN TOP OF STACK
                st_val,st_i=stack.pop()
                ans[st_i]=(index-st_i)
            stack.append([temp,index])
        return ans
        
