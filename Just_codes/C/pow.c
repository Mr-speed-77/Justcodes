#include <stdio.h>
#include <math.h> // using pow function

int main(){
    
    float a,b,p;
    printf("Enter a base: ");
    scanf("%f",&a);
    printf("Enter a power: ");
    scanf("%f",&b);
    
    // pow function use that numbers !
    p = pow(a,b);
    printf("%.2f ^ %.2f = %.2f",a,b,p);
    
    
}

