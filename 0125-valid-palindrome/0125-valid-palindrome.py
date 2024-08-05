class Solution:
    def isPalindrome(self, s: str) -> bool:
        start=0
        end=len(s)-1
        while(start<=end):
            if(s[start].isalnum()==False):
                start+=1
                continue
            if(s[end].isalnum()==False):
                end-=1
                continue
            if(s[start].lower()!=s[end].lower()):
                return False
            else:
                start+=1
                end-=1
        return True

