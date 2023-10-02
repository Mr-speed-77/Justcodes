#include <stdio.h>

int main(){
    
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    
	// Find the given number is Odd or Even
    (num % 2 == 0)?
        printf("%d is Even number",num):
        printf("%d is  Odd number",num);
}
