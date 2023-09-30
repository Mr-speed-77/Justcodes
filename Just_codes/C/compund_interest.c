
#include <stdio.h>
#include <math.h>

int
main (){
    
    // Declare variables
    int p;
    float t, r, co;
    printf ("Enter principle: ");
    scanf ("%d", &p);
    printf ("Enter time: ");
    scanf ("%f", &t);
    printf ("Enter rate: ");
    scanf ("%f", &r);

    // Compound Interest
    co = p * pow ((1 + r / 100), t);
    printf ("Compound Interest = %.2f",co);
    
}
