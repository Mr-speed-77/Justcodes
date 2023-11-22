#include <stdio.h>

void Prime();

int main(){
    
    int lw_limit, up_limit;
    printf("Enter a lower limit: ");
    scanf("%d", &lw_limit);
    printf("Enter a upper limit: ");
    scanf("%d", &up_limit);
    
    // Call the function
    Prime(lw_limit, up_limit);
    
}

// Generate prime numbers
void Prime(int lower, int upper){
    if(lower > 1 && upper > lower){
        for(int x=lower;x<=upper;x++){
            int isPrime = 1;
            for(int i =2;i <= x/2;i++){
                if(x % i == 0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime){
                printf("%d\n",x);
            }   
        
        }
    }else{
        printf("Enter greater than 1 !");
    }
}