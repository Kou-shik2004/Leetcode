class Solution:
    def decodeString(self, s: str) -> str:
        st=[]
        for char in s:
            if(char!=']'):
                st.append(char)
            else: # closing bracket appears
                temp=""
                while(st[-1]!='['):
                    temp=st.pop()+temp # to preserve order
                st.pop()
                num=""
                while(st and st[-1].isdigit()):
                    num=st.pop()+num
                st.append(int(num)*temp)
        return "".join(st)
                

        