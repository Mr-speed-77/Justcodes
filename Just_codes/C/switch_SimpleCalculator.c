#include <stdio.h>

// Declare a function !
int calculator(float x, float y, char oper);

int main()
{
    float a,b;
    char sym;
    
    // Get a input from user 
    printf("   WELCOME TO THE SIMPLE CALCULATOR \n");
    printf("------------------------------------------\n");
    printf("Enter  [1st number] [operator( +,-,*,/)] [2nd number] : \n");
    scanf("%f %c %f", &a, &sym, &b);
    
    // call the fucntion
    calculator(a, b, sym);
    
    
}

int calculator(float x,float y, char oper){

    float result; 
    
     // Using the switchcase statement 
    switch(oper){
    
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x / y;
            break;
        default:
            printf("Give a correct operator !");
            return 0.0f;
    }
    
    // Print the value 
    printf("%.1f %c %.1f = %.1f\n", x, oper, y, result);
    
    }


