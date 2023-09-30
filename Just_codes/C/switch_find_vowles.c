#include <stdio.h>

int main(){
    
    char alphabet;
    printf("Enter a alphabet: ");
    scanf("%c", &alphabet);
    switch(alphabet){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':    
        case 'u':
        case 'U':
            printf("%c is a vowel",alphabet);
            break;
        default:
            printf("%c is not a vowel",alphabet);
    }
}
