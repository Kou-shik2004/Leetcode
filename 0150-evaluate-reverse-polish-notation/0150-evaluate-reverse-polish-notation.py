class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack=[]
        for string in tokens:
            if (string in {'+','-','*','/'}):
                b=int(stack.pop())
                a=int(stack.pop())
                if(string =="+"):
                    stack.append(a+b)
                elif(string=="-"):
                    stack.append(a-b)
                elif(string=="*"):
                    stack.append(a*b)
                else:
                    stack.append(int(a/b))
            else:
                stack.append(int(string))
        return stack[-1]