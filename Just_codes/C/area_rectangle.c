#include <stdio.h>

int main(){
    
    // Declare a Variable
    
    float length,width,rectangle;
    printf("Enter a length: ");
    scanf("%f",&length);
    printf("Enter a width: ");
    scanf("%f",&width);
    
    // Using the formula for area of rectangle
    
    rectangle = length * width;
    printf("Area of rectangle = %f sq. units",rectangle);
    
    
}
