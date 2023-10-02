#include <stdio.h>

int main(){
    
    int num1,num2;
    printf("Enter a 1st number: ");
    scanf("%d",&num1);
    printf("Enter a 2nd number: ");
    scanf("%d",&num2);
    
    // Finding maximu using if else ...
    if(num1>num2)
        printf("%d is maximum",num1);
    
    else if(num1 == num2)
        printf("Both are equal !");
    
    else
        printf("%d is maximum",num2);
}