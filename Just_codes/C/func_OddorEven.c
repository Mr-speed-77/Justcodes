#include <stdio.h>

int Odd_Even();

int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    Odd_Even(num);
}

// Find Odd Or Even

int Odd_Even(int n){
    
    if(n %2 == 0){
        printf("Given number %d is Even", n);
    }
    else{
        printf("Given number %d is Odd", n);
    }
}
