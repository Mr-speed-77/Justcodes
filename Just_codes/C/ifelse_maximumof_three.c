#include <stdio.h>

int main(){
    
    int num1,num2,num3;
    printf("Enter a 1st number: ");
    scanf("%d",&num1);
    printf("Enter a 2nd number: ");
    scanf("%d",&num2);
    printf("Enter a 3rd number: ");
    scanf("%d",&num3);
    
    // Finding maximum values using if else ...
    if(num1>num2 && num1>num3)
        printf("%d is maximum",num1);
    
    else if(num2>num1 && num2>num3)
        printf("%d is maximum",num2);
    
    else if(num1 == num2 == num3)
        printf("All values are equal !");
    
    else
        printf("%d is maximum",num3);
}