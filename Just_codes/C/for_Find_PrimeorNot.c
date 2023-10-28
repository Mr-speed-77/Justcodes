#include <stdio.h>

int main(){
    
    int i, num, Isprime;
    printf("Enter a number: ");
    scanf("%d", &num);
    Isprime =1;
    
    // Find Given number is Prime number or not
    
    for(i=2; i<=num/2; i++){
        if(num % i == 0){
            Isprime = 0;
        }
    }
    if(Isprime == 1 && num > 1){
        printf("%d is Prime Number", num);
    }
    else
        printf("%d is Not prime Number", num);
}