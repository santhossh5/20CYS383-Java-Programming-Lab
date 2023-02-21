import math
class point:
    def __init__(self,po1,po2):
        self.po1=po1
        self.po2=po2
    def show(self):
        print('(',self.po1,',',self.po2,')')
    def move(self, x, y):
        self.po1 = self.po1+x
        self.po2 = self.po2+y
    def dist(self, point2):
        a=(point2.po1-self.po1)**2
        b=(point2.po2-self.po2)**2
        c=a+b
        print(math.sqrt(c))
        
p1=point(1,1)
p2=point(4,5)
p1.move(1,1)
p1.show()
p1.dist(p2)