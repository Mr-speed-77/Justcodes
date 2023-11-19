#include <stdio.h>

int main(){
    
    int num, i = 1, fact = 1;
    printf("Enter a factorial num: ");
    scanf("%d",&num);
    
    // Find a factorial value using while loop 
    
    while(i<=num){
     
        fact = fact * i;    
        i = i+1;
    }
    
    // Display the factorial value 
    
    printf("Facorial of given number %d is %d", num, fact);
}
