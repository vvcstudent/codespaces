import math

class Point:
    
    def __init__(self,x,y):
        self.x = x
        self.y = y
        print(self)

    def add(self,p):
        return Point(self.x + p.x,self.y + p.y)

    def dist(self,p):
        x_dist = abs(self.x - p.x)
        y_dist = abs(self.y - p.y)
        return math.sqrt(x_dist ** 2 + y_dist ** 2)

    def __str__(self):
        return f'({self.x},{self.y})'

p1 = Point(1.0,1.0)
p2 = Point(1.5,1.5)
p3 = p1.add(p2)

print(p1,p2,p3,p1.dist(p2))
