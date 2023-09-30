#include <stdio.h>

int main(){

  // Declare a varialble
    float length,width,rectangle;
    printf("Enter a length: ");
    scanf("%f",&length);
    printf("Enter a width: ");
    scanf("%f",&width);

    // Using the formula ford perimeter of a rectangle Rectangle
    rectangle =2*(length + width);
    printf("Perimeter of rectangle = %f units",rectangle);
    
    
}
