#include <stdio.h>

int main(){
    
    int base, exponent,dup_expo, power=0;
    
    printf("Enter base: ");
    scanf("%d",&base);
    
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    power = base;
    dup_expo = exponent;
    
     // Find power of given values 
    
    while(exponent-1 > 0){
        
        power = power * base;
        printf("%d\n", power);
        exponent -=1;
    }
    printf("power of base %d and component %d is %d", base, dup_expo , power);
}
