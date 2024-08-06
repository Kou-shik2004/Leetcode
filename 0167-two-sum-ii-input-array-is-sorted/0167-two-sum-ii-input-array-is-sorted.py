class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
       #logic compare first and last number if f+l>target
       #do l-- else f++ until f<=l
       first=0
       last=len(numbers)-1
       while first<=last:
            if numbers[first]+numbers[last]==target:
                return [first+1,last+1]
            elif numbers[first]+numbers[last]<target:
                first+=1
                continue
            else:
                last-=1
                continue
       return