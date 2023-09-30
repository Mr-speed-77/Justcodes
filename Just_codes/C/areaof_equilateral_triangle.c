#include <stdio.h>
#include <math.h>


int main(){
    
    float size,a;
    printf("Enter side of the equilateral triangle: ");
    scanf("%f",&size);
    
    // Area of an equilateral triangle
    a = (sqrt(3)/4)*pow(size,2);
    printf("Area of equilateral triangle = %.2f sq. units",a);
    
}

