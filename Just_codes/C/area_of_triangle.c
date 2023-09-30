#include <stdio.h>


int main(){
    
    double height,base,area;
    printf("Enter a height: ");
    scanf("%lf",&height);
    printf("Enter a base: ");
    scanf("%lf",&base);
    
    // Area of triangel 
    
    area = (height * base)/2;
    printf("Area of the triangle: %.2lf sq. units\n",area);
    
    
}

