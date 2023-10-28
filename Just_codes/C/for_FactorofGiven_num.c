#include <stdio.h>

int main(){
    
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Factor of 12:\n");
    
// Find a factor of given number 

    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            printf("%d\n",i);
        }
    }
    
}

