#include <stdio.h>


int main(){
    
    float height,base,area;
    printf("Enter a height: ");
    scanf("%f",&height);
    printf("Enter a base: ");
    scanf("%f",&base);
    
    // Area of triangel 
    
    area = (height * base)/2;
    printf("Area of the triangle: %.2f sq. units\n",area);
    
    
}

