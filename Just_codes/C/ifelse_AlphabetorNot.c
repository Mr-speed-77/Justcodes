#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    // Find give character is alphabet or not ! 
    
    if (( ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        printf("'%c' is Alphabet",ch);
    else
        printf("'%c' is not Alphabet",ch);
        
}