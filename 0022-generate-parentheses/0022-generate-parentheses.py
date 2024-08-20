class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        #idk why this is a stack question
        #Conditions
        #1. stop when open=closed=n
        #2. if closed < open add close close +1
        #3. if open <n add open open+1
        ans=[]
        def isSafe(open_n,closed_n,string):
            if(open_n==closed_n==n):
                ans.append(string)
                return 
            if(open_n < n):
                isSafe(open_n+1,closed_n,string+"(")
            if(closed_n<open_n):
                isSafe(open_n,closed_n+1,string+")")

        isSafe(0,0,"")
        return ans

