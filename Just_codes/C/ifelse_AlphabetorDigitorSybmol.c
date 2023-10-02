#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    
    // Find the given input is alphabet or digit or special character 
    
    if(ch >= 'a' && ch <='z' || ch >= 'A' && ch <= 'Z')
        printf("'%c' is alphabet",ch);
        
    else if(ch >= '0' && ch <= '9')
        printf("'%c' is a digit",ch);
        
    else
        printf("'%c is special character",ch);
}