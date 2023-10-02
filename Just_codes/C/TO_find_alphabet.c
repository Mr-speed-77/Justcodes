#include <stdio.h>

int main(){
    
    
    char ch;
    int i=0;
    printf("Enter any character: ");
    scanf("%c",&ch);
    
    // Finding Alphabet or not using ternary operator ! 
    
    ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))?
    printf("%c is a Alphabet",ch):
    printf("%c is not a Alphabet",ch);
    

}
