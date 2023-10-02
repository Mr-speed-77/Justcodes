#include "stdio.h"

int main(){
    
    // Declare a variable 
    int x,y,a;
    printf("Enter a first value & second value: \n" );
    scanf("%d\n%d",&x,&y);
    
    // Before swap
    printf("Before swapping !\n");
    printf("value of x = %d\nvalue of y = %d\n",x,y);
    
    // Swap values
    a = x^y;
    x = x^a;
    y = y^a;
    
    // After swap
    printf("After swapping !\n");
    printf("value of x = %d\nvalue of y = %d",x,y);
    
    
}