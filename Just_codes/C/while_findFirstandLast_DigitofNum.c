#include <stdio.h>

int LastDigit();
int FisrDigit();

int main(){
    
    
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    
    // Call the function
    
    FisrDigit(number);
    LastDigit(number);
    
}

// Find the LastDigit of a number

int LastDigit(int num){
    
    num = num % 10;
    printf("Number of  last digit is : %d\n", num);
}    

// Find a  first digit of Number

int FisrDigit(int num){
    
    while(num>=10){
        
        num = num / 10;
    }
    printf("Number of first digit is : %d\n", num);
    }

