class rectangle():
    def __init__(self,length,breadth):
        self.length=length
        self.breadth=breadth
    def area(self):
        return self.length*self.breadth

a=int(input('Enter a length of rectangle: '))
b=int(input('Enter a breadth of rectangle: '))
obj=rectangle(a,b)

print("The area of rectangle is: ",obj.area())