class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
       map={} # value : index
       for index,num in enumerate(numbers):
            if target-num in map:
                return [map[target-num]+1,index+1]
            map[num]=index
       return