#include <stdio.h>

int main(){
    
    // Declare a varialble
    double meter,kilometer,centimeter;
    printf("Enter a centimiter: ");
    scanf("%lf",&centimeter);
    
    // Convert Centimeter to Meter and Kilometer  
    meter = centimeter / 100;
    kilometer = centimeter / 100000;
    
    printf("Meter: %.1f m\n",meter);
    printf("Kilometer: %.2f km\n",kilometer);
}
