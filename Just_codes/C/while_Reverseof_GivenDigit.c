#include <stdio.h>

int main(){
    
    int num, reverse =0;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    
    // Find a reverse of digits
    
    while(num != 0){
        
        reverse = (reverse * 10) + (num % 10);
        
        num /= 10;
    }
    // Display a reverse digits
    
    printf("Reverse of given digits: %d", reverse);
}
