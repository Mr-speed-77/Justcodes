#include <stdio.h>

int main(){
    
    long long num;
    int count=0,sum=0;
    printf("enter a number: ");
    scanf("%lld", &num);
    
    // Find the number digit 
    
    while(num!=0){;
        
        count+=num%10;
        sum ++;
        num=num/10;
    }
    
    printf("Number of digits = %d", sum);
    }

