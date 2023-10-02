#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    
    // find given alphabet is lower or upper case
    
    if(ch >= 'a' && ch <= 'z')
        printf("'%c' is a lower case",ch);
        
    else if(ch >= 'A' && ch <= 'Z')
        printf("%c is a upper case",ch);
        
    else
        printf("Enter Invalid alphabets, try again");
    
}