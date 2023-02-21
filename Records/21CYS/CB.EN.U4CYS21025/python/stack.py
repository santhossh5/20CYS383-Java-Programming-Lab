class mystk():
    def __init__(self,size):
        self.lst = []
        self.size = size
        for i in range(size):
            lst.append(0)
        self.top = -1
        
    def push(self,value):
        if(self.top == self.size):
            return 'Full'
        self.lst[top+1] = value
        top+=1
        
    def pop(self):
        if(self.top<0):
            return 'Empty'
        o = self.lst[self.top]
        self.top-=1
        return o
        
    def display(self):
        for i in range(self.top,0,-1):
            print(self.lst[i])
            
    def top(self):
        return self.lst[self.top]
        
    def size(self):
        return self.top
        
    def isEmpty(self):
        if(top<0):
            return 'Empty'
        return 'Not Empty'
        
stack = mystk(5)
stack.push()
