class Solution:
    def isValid(self, s: str) -> bool:
        st=[]
        map={')':'(',']':'[','}':'{'}
        for char in s:
            if char in map:
                if st and map[char]==st[-1]: #should not be empty
                    st.pop()
                else:
                    return False #"[)" this case 
            else:
                st.append(char)
        return True if not st else False
           