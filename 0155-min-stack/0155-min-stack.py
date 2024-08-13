class MinStack:

    def __init__(self):  #2 3 -5    2  -5 
        self.stack=[]
        self.minlist=[]

    def push(self, val: int) -> None:
        self.stack.append(val)
        val=min(val,self.minlist[-1] if self.minlist else val)
        self.minlist.append(val) #gives current minimum

    def pop(self) -> None:
        self.stack.pop()
        self.minlist.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minlist[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()