#include <stdio.h>
#include <math.h> // Import math header file

double area();
double diametere();
double circumference();

int main(){
    
    float radius;
    printf("Enter a radius: ");
    scanf("%f", &radius);
    
    // Calling a function 
    
    area(radius);
    diametere(radius);
    circumference(radius);
    
}

// Find area of circle

double area(double r){
    
    
    printf("Area : %.2f sq. units\n", (M_PI * r * r));

}

// find diametere of circle

double diametere(double r ){
    
    printf("Diametere : %.1f units\n", (2 * r));
}

// find circumference of circle


double circumference(double r){
    
    printf("Circumference : %.2f units", (2 * M_PI * r));
}