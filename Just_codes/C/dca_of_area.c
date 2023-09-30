#include <stdio.h>

int main(){
    
    // Declare a Variable
    
    float  diameter,circumference,area,radius;
    printf("Enter a radius: ");
    scanf("%f",&radius);

    
    // Using the formula to find diameter, circumference and area of circle
    
    diameter = 2 * radius; 
    circumference = 2 * 3.14 * radius;  
    area = 3.14 * radius * radius;
    printf("diameter = %.2f\n",diameter);
    printf("circumference = %.2f\n",circumference);
    printf("circumference = %.2f sq. units\n",area);
    
    
}
