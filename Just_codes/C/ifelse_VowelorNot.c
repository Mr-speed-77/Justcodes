#include "stdio.h"

int main(){
    
    char ch;
    printf("Enter a alphabet letter: ");
    scanf("%c",&ch);
    
	// Find Vowel or Not 
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch  == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        printf("'%c' is a vowel",ch);
    
    else if(!('a'<= ch && 'z' >= ch || 'A' <= ch && 'Z' >= ch))
        printf("It is not a alphabet ");

    else
        printf("'%c' is not a vowel",ch);
    
}