import math

class ArcLength:
    
    def __init__(self,radius,angle):
        self.radius = radius
        self.angle = angle
    
    # Calculate arc Length
    
    def calculate_arc_length(self):
        
        angle_in_radians = math.radians(self.angle)
        
        arc_length = self.radius * angle_in_radians
        print(arc_length)

# radius and angle values 

radius_value = 5
angle_value = 45

# create object 
arclength = ArcLength(radius = radius_value, angle = angle_value)
result = arclength.calculate_arc_length()

# Finally display the result

print(f"The radius {radius_value} and angle {angle_value} Arc Length is {result}")
    
    
    
    
    
    
    
