#include <stdio.h>

int min_num();
int max_num();

int main(){
    
    int num1, num2;
    printf("Enter a two numbers: \n");
    scanf("%d %d", &num1, &num2);
    
    // Call the functions
    int Minimum = min_num(num1, num2);
    int Maximum = max_num(num1, num2);
    printf("The Minimum values is: %d\nThe Maximum value is: %d", Minimum, Maximum);
}

// Find Minimum number

int min_num(int n1, int n2){
    
    if(n1 < n2){
        return n1;
    }
    else{
        return n2;
    }
}

// Find Maximum number 

int max_num(int n1, int n2){
    
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
    
}