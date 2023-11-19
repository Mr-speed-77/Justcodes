#include <stdio.h>

int main(){
    
    int num,last_digit,sum=0;
    printf("Enter a num: ");
    scanf("%d",&num);
    
    // Find sum of digits 
    
    while(num!=0){
        
        last_digit = num % 10;
        sum += last_digit;
        num /= 10;
        
    }
    printf("sum of digits = %d", sum);
    
}
