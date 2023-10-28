#include <stdio.h>

int main(){
    
    int n,fact =1;
    printf("Enter a Value: ");
    scanf("%d", &n);
    
    // Find Factorial value of give number 
    
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    printf("Factorial of %d is %d", n, fact);
}