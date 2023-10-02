#include <stdio.h>

int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    // Finding given number positive or not 

    if(num < 0)
        printf("%d is negative number",num);
    else if(num > 0)
        printf("%d is positive number",num);
    else
        printf("%d is zero",num);
}